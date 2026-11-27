#include <stdio.h>

// Function to calculate the weekday of the first day of any given month/year
// Returns: 0 for Sunday, 1 for Monday, ..., 6 for Saturday
int getFirstWeekday(int year, int month) {
    // Sakamoto's Algorithm components
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    if (month < 3) {
        year -= 1;
    }
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + 1) % 7;
}

// Function to check if the given year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // It is a leap year
    }
    return 0; // It is not a leap year
}

int main() {
    int year;

    // Get year input from user
    printf("Enter the year: ");
    if (scanf("%d", &year) != 1 || year < 1) {
        printf("Invalid year entered.\n");
        return 1;
    }

    // Array containing total days in each month (Index 0 is January)
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Array containing names of the months
    char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    // Update February days if it's a leap year
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    printf("\n=====================================");
    printf("\n         CALENDAR FOR YEAR %d         ", year);
    printf("\n=====================================\n");

    // Loop through all 12 months
    for (int m = 0; m < 12; m++) {
        printf("\n  ---------------------------------\n");
        printf("             %s              \n", months[m]);
        printf("  ---------------------------------\n");
        printf("   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

        // Determine where the 1st day of the month lands
        int currentDay = getFirstWeekday(year, m + 1);

        // Print initial blank spaces for padding before the 1st day hits
        for (int space = 0; space < currentDay; space++) {
            printf("     ");
        }

        // Print all days of the current month
        for (int day = 1; day <= daysInMonth[m]; day++) {
            printf("%5d", day);

            // Break the text grid line once we reach Saturday (column 6)
            if (++currentDay > 6) {
                currentDay = 0;
                printf("\n");
            }
        }
        
        // Print a clean trailing newline if the month didn't end perfectly on a Saturday
        if (currentDay != 0) {
            printf("\n");
        }
    }

    return 0;
}

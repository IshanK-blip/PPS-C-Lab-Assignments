#include <stdio.h>

int main()
{
    int a, b, choice, result;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\n--- MENU ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            result = a + b;
            printf("Addition is = %d\n", result);
            break;

        case 2:
            result = a - b;
            printf("Subtraction is = %d\n", result);
            break;

        case 3:
            result = a * b;
            printf("Multiplication is = %d\n", result);
            break;

        case 4:
            result = a / b;
            printf("Division is = %d\n", result);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}

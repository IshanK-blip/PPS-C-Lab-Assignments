#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[50],str2[20];
    int ch,i,j;
    printf("Enter String 1");
    scanf("%s", str1);
    printf("Enter String 2");
    scanf("%s", str2);
    
    do
    {
        printf("\n\tMENU");
        printf("\n---------\n");
        printf("1:Find Length of String");
        printf("\n 2:Concatenate Strings");
        printf("\n 3:Copy String");
        printf("\n 4:Compare Strings");
        printf("\n 5:Exit\n");
        scanf("%d", &ch);
     
        switch (ch)
        {
            case 1: 
            {
                printf("Length of string: %d\n", (int)strlen(str1));
                break;
            }
               
            case 2: 
            {
                printf("Enter second string to concatenate: ");
                scanf("%s", str2);
               
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;
            }
            case 3: 
            {
                char str3[20];
                strcpy(str2,str1);
                strcpy(str3,str2);
                printf("Copied string str1 and str2 to str3: %s\n", str3);
                break;
            }
               
            case 4:
            {
                printf("Enter second string to compare:");
                scanf("%s", str2);
               
                int result = strcmp(str1, str2);
                if (result > 0)
                {
                    printf("String 1 is greater than String 2\n");
                }
                else if (result < 0)
                {
                    printf("String 2 is greater than String 1\n");
                }
                else
                {
                    printf("Both strings are equal\n");
                }
                break;
            }

            case 5:
                break;
               
            default:
                printf("Invalid Choice\n");
        }
    } while (ch != 5);

    return 0;
}

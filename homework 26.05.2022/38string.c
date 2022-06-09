#include <stdio.h>
#include <string.h>

int main()
{
    while (1)
    {
        printf("\n\nEach string word limit 150 characters.**\n");
        char str1[151];
        char str2[151];

        // printf("Enter first string : ");
        // gets(str1);
        // getchar();

        // printf("Enter second string : ");
        // gets(str2);
        // getchar();

        int choice;
        printf("1. Concatenate two strings\n");
        printf("2. Compare two strings\n");
        printf("3. Copy one string onto another\n");
        printf("4. Calculate lenght of string\n");
        printf("5. Concatenate n characters of one string with another\n");
        printf("6. Copy n characters of one string onto another\n");
        printf("7. Check whether one string is a portion of another string or not\n");
        printf("Any other key to quit!\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);
        getchar();

        if (choice < 1 || choice > 7)
            return 0;
        else if (choice == 1)
        {
            printf("Enter first string : ");
            gets(str1);
            // getchar();
            printf("Enter second string : ");
            gets(str2);
            // getchar();
            strcat(str1, str2);
            printf("New string is %s\n", str1);
        }
        else if (choice == 2)
        {
            printf("Enter first string : ");
            gets(str1);
            // getchar();
            printf("Enter second string : ");
            gets(str2);
            // getchar();
            if (strcmp(str1, str2) == 0)
                printf("Strings are same.\n");
            else
                printf("Strings are not same.\n");
            // getchar();
        }
        else if (choice == 3)
        {
            printf("Enter destination string : ");
            gets(str1);
            // getchar();
            printf("Enter source string : ");
            gets(str2);
            // getchar();
            strcpy(str1, str2);
            printf("Now the destination string is : %s\n", str1);
            // getchar();
        }
        else if (choice == 4)
        {
            printf("Enter a string : ");
            gets(str1);
            // getchar();
            printf("The length of the string is %d\n", strlen(str1));
            // getchar();
        }
        else if (choice == 5)
        {
            printf("Enter destination string : ");
            gets(str1);
            // getchar();
            printf("Enter source string : ");
            gets(str2);
            // getchar();
            int n;
            printf("Enter value of n : ");
            scanf("%d", &n);
            strncat(str1, str2, n);
            printf("New string is %s\n", str1);
            // getchar();
        }
        else if (choice == 6)
        {
            printf("Enter destination string : ");
            gets(str1);
            // getchar();
            printf("Enter source string : ");
            gets(str2);
            // getchar();
            int n;
            printf("Enter value of n : ");
            scanf("%d", &n);
            strncpy(str1, str2, n);
            printf("New string is %s\n", str1);
            // getchar();
        }
        else if (choice == 7)
        {
            printf("Enter the main string : ");
            gets(str1);
            // getchar();
            printf("Enter the sub-string : ");
            gets(str2);
            // getchar();
            if(strstr(str1, str2))printf("\"%s\" is a part of main string.\n");
            else printf("\"%s\" is not a part of the main string.\n", str2);
            // getchar();
        }
    }

    return 0;
}
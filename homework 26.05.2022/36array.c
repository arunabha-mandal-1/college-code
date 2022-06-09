#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 01. counting vowels
int countVowels(char *str)
{
    int count = 0, len = strlen(str);
    // strupr(str); // if we do this, our original string will be capitalized
    for (int i = 0; i < len; i++)
    {
        char temp = str[i];
        switch (toupper(temp))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
            break;
        }
    }
    return count;
}

// 02. counting consonants
int countConsonants(char *str)
{
    int count = 0, len = strlen(str);
    // strupr(str); // if we do this, our original string will be capitalized
    for (int i = 0; i < len; i++)
    {
        char temp = str[i];
        switch (toupper(temp))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            break;
        case ' ':
            break;
        default:
            count++;
            break;
        }
    }
    return count;
}

// 03. counting special characters
int countSpecial(char *str)
{
    int count = 0, len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        /*we can use any of these lines of code as provided place*/
        if (str[i] < 48 || str[i] > 57)
            // if(!(str[i] >= 48 && str[i] <= 57))
            if (((str[i] < 65) || (str[i] > 80 && str[i] < 97) || (str[i] > 122)) && str[i] != ' ')
                count++;
        // if(str[i] >= 48 && str[i] <= 57) count--;
    }
    return count;
}

// 04. counting words
int countWords(char *str)
{
    int count = 0, len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
            count++;
    }
    return (count + 1);
}

// 05. counting occurances of a character
int charOccrCount(char *str, char ch)
{
    int count = 0, len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ch)
            count++;
    }
    return count;
}

int main(void)
{
    while (1)
    {
        char str[100];
        printf("Enter string : ");

        /*Use either one*/
        fflush(stdin);
        // getchar();
        gets(str);

        printf("\nWhich operation do you want to perform?\n\n");
        int choice;

        printf("1. Count vowels.\n");
        printf("2. Count consonants.\n");
        printf("3. Count special characters.\n");
        printf("4. Count no of words.\n");
        printf("5. Count no of occurances in the string.\n");
        printf("6. Quit.");

        printf("\nEnter choice : ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 6)
        {
            printf("Please enter correct choice!\n");
        }
        else
        {
            if (choice == 1)
            {
                int vowels = countVowels(str);
                printf("There are %d vowels in the string.\n", vowels);
                printf("___________________________________________________________________________\n\n");
            }
            else if (choice == 2)
            {
                int consonants = countConsonants(str);
                printf("There are %d consonants in the string.\n", consonants);
                printf("___________________________________________________________________________\n\n");
            }
            else if (choice == 3)
            {
                int specialChar = countSpecial(str);
                printf("There are %d special characters in the string.\n", specialChar);
                printf("___________________________________________________________________________\n\n");
            }
            else if (choice == 4)
            {
                int words = countWords(str);
                printf("There are %d words in the string.\n", words);
                printf("___________________________________________________________________________\n\n");
            }
            else if (choice == 5)
            {
                printf("Which character you want to find? ");
                char findCh;
                getchar();
                scanf("%c", &findCh);
                int occOfChar = charOccrCount(str, findCh);
                printf("There are %d %c in the string.\n", occOfChar, findCh);
                printf("___________________________________________________________________________\n\n");
            }
            else
            {
                return 0;
            }
        }
    }

    // printf("%d %d %d %d %d %d %d %d %d %d\n",'0', '1', '2', '3', '4', '5', '6', '7', '8', '9');
    return 0;
}
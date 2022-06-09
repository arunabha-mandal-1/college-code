#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    // printf("%c\n", str[52]); // contains NULL

    int count = 0;
    int len = 0;

    printf("Enter the string within 100 words : ");
    gets(str);
    len = strlen(str);

    for(int i = 0; i < len; i++)
    {
        switch(toupper(str[i]))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
        }
    }

    printf("No of vowels in the string is %d.\n", count);
    return 0;
}
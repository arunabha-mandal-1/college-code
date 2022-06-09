#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char str[100];
    char newStr[100];
    printf("Enter a sentence within 100 letters : ");
    gets(str);

    // char a = 'a';
    // printf("%c\n", a);
    // int a1 = toupper(a);
    // printf("%c\n", a);
    // printf("%d\n", a1);

    int i = 0;
    int j = 0;
    for(i; i < strlen(str); i++)
    {
        switch((char)(toupper(str[i])))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                break;
            default:
                newStr[j] = str[i];
                j++;
                break;
        }
    }
    newStr[j] = '\0';
    puts(newStr);
    return 0;
}
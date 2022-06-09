// program to find a substring in a string

#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[100];
    printf("Enter the string : ");
    gets(string);

    char subString[99];
    printf("Enter the substring : ");
    gets(subString);

    // int answer = strstr(string, subString); // *char to int
     
    if(strstr(string, subString))
    {
        printf("\"%s\" contains \"%s\"\n", string, subString);
    }
    else
    {
        printf("\"%s\" does *not* contain \"%s\".\n", string, subString);
    }
    return 0;
}
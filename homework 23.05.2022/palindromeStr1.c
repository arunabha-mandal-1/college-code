#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str[100];
    printf("Enter a string within 100 letters : ");
    gets(str);

    int len = strlen(str);

    //-------> Wrong method
    // char revStr[len + 1] = strrev(str);
    // printf("%c\n", revStr);


    char* revstr = (char*)calloc((len + 1), sizeof(char));

    // did this cuz strrev reverses the main string
    revstr = strcpy(revstr, str);
    revstr = strrev(revstr);

    if(strcmp(strupr(str), strupr(revstr)) == 0)
    {
        printf("Palindrome string.\n");
    }
    else
    {
        printf("Not a palindrome string.\n");
    }

    free(revstr);
    return 0;
}
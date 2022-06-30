#include <stdio.h>

int main()
{
    printf("Enter character : ");

    // getc() is used to take input of a character
    char c = getc(stdin);
    printf("Character entered : ");
    // putc() is used to print a character
    putc(c, stdout);

    // we can also use getc() and putc() with file pointer -> follow next one
    
    return 0;
}
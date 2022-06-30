#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("getc_putc2.txt", "r");

    // another demonstration of getc() and putc()
    char c = getc(fptr); // taking one character
    putc(c, stdout);
    fclose(fptr);

    // we can take all the characters one by one
    return 0;
}
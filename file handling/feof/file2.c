#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file2.txt", "r");

    char ch;

    while (!feof(ptr))
    {
        ch = fgetc(ptr);
        putc(ch, stdout);
    }
    
    fclose(ptr);
    return 0;
}
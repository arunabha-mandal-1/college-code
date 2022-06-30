#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file1.txt", "r");

    char ch = fgetc(ptr);
    putc(ch, stdout);

    fputc('a', ptr);

    if(ferror(ptr)==0)
        printf("\nNo error.\n");
    else
        printf("\nError.\n"); // fetches an error as the file is empty

    // will have to explore this topic more

    fclose(ptr);
    
    return 0;
}
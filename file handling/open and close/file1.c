#include <stdio.h>

int main()
{
    FILE *fptr;

    // fopen() is used to open file
    fptr = fopen("E:/college-code/temp.txt", "r");

    char temp[30];
    fscanf(fptr, "%s", temp);
    puts(temp);

    // fclose() is used to close a file
    fclose(fptr) ;

    return 0;
}
#include <stdio.h>

// getw

int main()
{
    FILE *fptr;
    fptr = fopen("file1.txt", "r");

    // getw is used to get a number from a file
    int a = getw(fptr);
    printf("%d\n", a); // is not working
    fclose(fptr);
    return 0;
}
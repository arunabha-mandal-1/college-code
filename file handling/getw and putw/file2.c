#include <stdio.h>

// putw()

int main()
{
    FILE *fptr;
    fptr = fopen("file2.txt", "w+");

    for(int i=0; i<11; i++)
    {
        putw(i, fptr);
    }
    fclose(fptr);

    // is not working as expected
    return 0;
}
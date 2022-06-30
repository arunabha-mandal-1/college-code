#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file2.txt", "r");

    char temp[30];
    fscanf(fptr, "%s", temp);
    puts(temp);
    printf("%d\n", ftell(fptr)); // using to know the current position of the file pointer

    fscanf(fptr, "%s", temp);
    puts(temp);
    printf("%d\n", ftell(fptr));

    fscanf(fptr, "%s", temp);
    puts(temp);
    printf("%d\n", ftell(fptr));

    fclose(fptr);
    return 0;
}
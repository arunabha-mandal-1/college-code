#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file1.txt", "r");

    char temp[30];
    fscanf(ptr, "%s", temp);
    puts(temp); // Kittu

    fscanf(ptr, "%s", temp);
    puts(temp); // Mandal

    rewind(ptr); // taking file stream to the beginning of the file
    fscanf(ptr, "%s", temp);
    puts(temp); // Kittu

    fclose(ptr);

    return 0;
}
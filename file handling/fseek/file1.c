#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file1.txt", "r+");

    // using fseek() to move pointer after 'Arunabha'
    fseek(fptr, 9, SEEK_SET);

    char temp[30];

    // assigning the rest of the string to temp
    fgets(temp, 30, fptr);
    fclose(fptr);
    puts(temp); // Mandal is fucking insane.
    return 0;
}
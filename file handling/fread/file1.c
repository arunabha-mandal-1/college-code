#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file1.txt", "r");

    char temp[100];

    puts(temp); // garbage
    int tempSize = fread(temp, 1, 16, ptr);
    puts(temp); // Arunabha Mandal
    printf("\n%d\n", tempSize); // although it's giving 15 but I am considering an extra nul character

    fclose(ptr);
    return 0;
}
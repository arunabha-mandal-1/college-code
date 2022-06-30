#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file1.txt", "r+");

    // experimenting with r+
    // see the result in file1.txt in the same folder
    // initial content was "Arunabha Mandal"
    fputc('c', ptr);
    fclose(ptr);

    return 0;
}
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file1.txt", "r");
    char temp[30];

    // fscanf() is used to to read data from a file
    fscanf(fptr, "%s", temp);
    puts(temp);
    fclose(fptr);

    /*********************************************/

    FILE *fptr1;
    fptr1 = fopen("_file1.txt", "r+");
    char temp1[] = "I am not Arunabha Mandal!";

    // fprintf() is used to write data in a file
    fprintf(fptr1, "%s", temp1);
    fclose(fptr1); // do not forget to close the file

    
    return 0;
}
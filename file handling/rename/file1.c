#include <stdio.h>

int main()
{
    // int temp = rename("file1.txt", "temp1.txt");
    int temp = rename("file1.txt", "fileAru.txt");

    if(temp==0)
        printf("File renamed successfully.\n");
    else
        printf("Error!\n");
    return 0;
}
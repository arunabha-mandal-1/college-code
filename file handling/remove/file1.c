#include <stdio.h>

int main()
{
    // FILE *ptr;
    // ptr = fopen("temp1.txt", "r");

    int temp = remove("temp1.txt");

    if(temp==0) printf("file removed\n");
    else printf("unable to remove\n");

    // fclose(ptr);


    // run this code to delete temp1.txt file from the current folder
    return 0;
}
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file1.txt", "r");

    char temp[20];
    fscanf(ptr, "%s", temp);
    puts(temp);

    if(feof(ptr)==0)
        printf("Not end of file.\n");
    else
        printf("End of file.\n");

    fscanf(ptr, "%s", temp);
    puts(temp);

    if(feof(ptr)==0)
        printf("Not end of file.\n");
    else
        printf("End of file.\n");
    
    fclose(ptr);
    return 0;
}
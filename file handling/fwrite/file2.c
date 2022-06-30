#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file2.txt", "w+");
    
    char temp[50] = "Arunabha Mandal is a good boy";

    // experiment
    printf("%d\n", strlen(temp)); // 29
    printf("%d\n", sizeof(temp)); // 50

    size_t tempSize = fwrite(temp, 1, strlen(temp)+1, ptr);
    printf("%d\n", tempSize);
    puts(temp);
    fclose(ptr);

    
    return 0;
}
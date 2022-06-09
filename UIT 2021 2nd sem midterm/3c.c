#include <stdio.h>
#include <string.h>

void split(char *strRoot, char *strDeli)
{
    char *token;
    token = strtok(strRoot, strDeli);

    while(token != NULL)
    {
        printf("%s, ", token);
        token = strtok(NULL, strDeli);
    }
}

int main(void)
{
    char strRoot[] = "aru@123#lk5";
    char strDeli[] = "@#";

    // if we write this way, program will return nothing(NULL)
    // char *strRoot = "aru@123#lk5";
    // char *strDeli = "@#";
    
    // printf("%s\n", strtok(strRoot, strDeli));
    // printf("%s\n", strtok(NULL, strDeli));
    // printf("%s\n", strtok(NULL, strDeli));
    // printf("%s\n", strtok(NULL, strDeli));


    split(strRoot, strDeli);
    return 0;
}
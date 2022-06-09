// Concatenate 3 strings without using strcat()

#include <stdio.h>
#include <stdlib.h>

// count length
int countLength(char* str)
{
    int count = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

// main function
int main()
{
    char firstStr[100];
    printf("Enter first string : ");
    gets(firstStr);
    int firstLength = countLength(firstStr);

    char secondStr[100];
    printf("Enter second string : ");
    gets(secondStr);
    int secondLength = countLength(secondStr);

    char thirdStr[100];
    printf("Enter third string : ");
    gets(thirdStr);
    int thirdLength = countLength(thirdStr);

    int totalLength = firstLength + secondLength + thirdLength;
    char* newStr = (char*)calloc(totalLength + 1, sizeof(char));

    int i = 0;
    while(i < totalLength)
    {
        for(int j = 0; j < firstLength; j++)
        {
            newStr[i] = firstStr[j];
            i++;
        }
        for(int k = 0; k < secondLength; k++)
        {
            newStr[i] = secondStr[k];
            i++;
        }
        for(int l = 0; l < thirdLength; l++)
        {
            newStr[i] = thirdStr[l];
            i++;
        }
    }
    newStr[i] = '\0';

    printf("New string : ");
    puts(newStr);
    // int m = 0;
    // while(newStr[m] != '\0')
    // {
    //     printf("%c", newStr[m]);
    //     m++;
    // }
    return 0;
}
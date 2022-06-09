#include <stdio.h>
#include <stdlib.h>

// counting the lenth of the string without using any fucking function
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

// reversing the string and returning a pointer
char* reverseString(char* str)
{
    int length = countLength(str);
    char* newStr = (char *)calloc(length, sizeof(char));

    for(int i = length - 1; i >=0; i--)
    {
        newStr[length - i - 1] = str[i];
    }

    return newStr;
}

// reversing the root string in place 
void reverseStringInPlace(char* str)
{
    int length = countLength(str);
    for(int i = 0; i < length; i++)
    {
        char temp = str[i];
        str[i] = str[length - i -1];
        str[length - i -1] = temp;
    }
}

// lowercase to uppercase
void lowerToUpper(char* str)
{
    int length = countLength(str);
    for(int i = 0; i < length; i++)
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            str[i] = (char)(str[i] - 32);
        }
    }
}

int main()
{

    char str[100];
    printf("Enter a sentence within 100 letters : ");
    gets(str);

    int len = countLength(str);
    lowerToUpper(str);
    printf("%s\n", str);
    // printf("%d\n", len);

    char* revStr = reverseString(str);
    lowerToUpper(revStr);
    // int revLen = countLength(str);
    printf("%s\n", revStr);
    // printf("%d\n", revLen);

    // // converting both into uppercase(done before)
    // lowerToUpper(revStr);
    // lowerToUpper(str);

    for(int i = 0; i < len; i++)
    {
        if(str[i] != revStr[i])
        {
            printf("-------\nNot palindrome.\n");
            return 0;
        }
    }

    printf("------\nPalindrome.\n");

    free(revStr);
    return 0;
}
// write a C program to provide ascii char of a given int
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num < 33 || num > 127)
    {
        // https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
        return -1;
    }
    printf("%c\n", (char)num);
    return 0;
}
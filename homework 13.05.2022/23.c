#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number to check for palindrome : ");
    scanf("%d", &number);

    int reversed = 0;
    int temp = number;

    while(temp>0)
    {
        int rem = temp % 10;
        reversed = (reversed*10) + rem;
        temp /= 10;
    }

    if(reversed==number)printf("Palindrome.\n");
    else printf("Not palindrome.\n");

    return 0;
}
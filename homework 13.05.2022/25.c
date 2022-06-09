#include <stdio.h>

unsigned long long int factorial(int n)
{
    if(n < 0) {return -1;}
    if(n <= 1) {return 1;}
    return (n * factorial(n-1));
}

int main(void)
{
    // int number;
    // printf("Enter a number : ");
    // scanf("%d", &number);
    // printf("Factorial is : %llu\n", factorial(number));

    int n, r;

    printf("Enter n : ");
    scanf("%d", &n);

    printf("Enter r : ");
    scanf("%d", &r);

    unsigned long long int npr = factorial(n) / factorial(n - r);
    printf("%dP%d = %llu\n", n, r, npr);

    return 0;
}
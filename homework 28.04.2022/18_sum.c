#include <stdio.h>

int main()
{
    int x, y, count=0;
    unsigned long long product = 1;

    printf("Enter the value of x : ");
    scanf("%d", &x);

    printf("Enter the value of y : ");
    scanf("%d", &y);

    if(x ==0 || y == 0)
    {
        printf("Please try again with the values greater than zero.\n");
        return -1;
    }

    int sum = 0;
    for(int i = 0; i < 51; i++)
    {
        if(i % x == 0 && i % y != 0)
        {
            printf("%d ", i);
            sum += i;
            product *= i;
            count++;
        }
    }
    printf("\nSum and product of all numbers that are divisible by %d but not divisible by %d between 1 to 50 are %d and %llu respectively.\n", x, y, sum, product);
    printf("Number of all the values that are divisible by %d but not divisible by %d is %d\n", x, y, count);
    // printf("%d\n", 0%5); 
    return 0;
}
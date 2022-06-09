#include <stdio.h>

int main()
{
    int x, y;

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
        }
    }
    printf("\nSum of all numbers thar are divisible by %d and not divisible by %d between 1 to 50 is %d\n", x, y, sum);
    // printf("%d\n", 0%5); 
    return 0;
}
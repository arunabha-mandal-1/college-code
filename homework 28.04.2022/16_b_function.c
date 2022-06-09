#include <stdio.h>

int main()
{
    double x;
    int y;
    printf("Enter the value of x : ");
    scanf("%lf", &x);

    if(x < 0)
    {
        y = 1;
        printf("y = %d\n", y);
    }
    else if(x == 0)
    {
        y = 0;
        printf("y = %d\n", y);
    }
    else
    {
        y = -1;
        printf("y = %d\n", y);
    }

    printf("--------------------------------------------\n");
    return 0;
}
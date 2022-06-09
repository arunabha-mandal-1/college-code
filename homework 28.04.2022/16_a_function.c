#include <stdio.h>

int main()
{
    double x;
    int y;

    printf("Enter the value of x : ");
    scanf("%lf", &x);


    if(x != 0.00)
    {
        if(x > 0.00)
        {
            y = -1;
            printf("y = %d\n", y);
            return 0;
        }
        if(x < 0.00)
        {
            y = 1;
            printf("y = %d\n", y);
            return 0;
        }
    }
    y = 0;
    printf("y = %d\n", y);
    return 0;
}
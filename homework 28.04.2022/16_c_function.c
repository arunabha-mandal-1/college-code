#include <stdio.h>

int main()
{
    double x;
    printf("Enter the value of x : ");
    scanf("%lf",&x);

    // int y = (x==0.00) ? 0 : ((x < 0.00) ? 1 : -1);
    int y = (x > 0) ? -1 : (x==0 ? 0 : 1);
    printf("y = %d\n", y);


    return 0;
}
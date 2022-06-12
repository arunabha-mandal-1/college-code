// rotate the values of x, y, z
#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter the value of x : ");
    scanf("%d", &x);

    printf("Enter the value of y : ");
    scanf("%d", &y);

    printf("Enter the value of z : ");
    scanf("%d", &z);


    // rotating
    int temp = x;
    x = y;
    y = z;
    z = temp;

    printf("\nNow...\n\tx = %d\n\ty = %d\n\tz = %d\n", x, y, z);

    return 0;
}
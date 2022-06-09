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

    int max = x > y ? (x > z ? x : z) : (y > z ? y : z);
    int min = x < y ? (x < z ? x : z) : (y < z ? y : z);

    printf("\nMax = %d\nMin = %d\n", max, min);

    return 0;
}
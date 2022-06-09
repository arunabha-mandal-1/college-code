#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Enter value of x : ");
    scanf("%d", &x);

    y = (x*x) + (2*x) - 1;
    printf("y = %d\n", y);
    
    return 0;
}
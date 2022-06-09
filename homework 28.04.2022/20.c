#include <stdio.h>

int main(void)
{
    float x,y;
    printf("Enter the value of x : ");
    scanf("%f", &x);

    int flag;
    if(x <= 1.0)
    {
        flag = 10;
    }else
    {
        flag = 20;
    }

    switch(flag)
    {
        case 10:
            y = (1.2 * x) + 0.98;
            printf("y = %0.2f\n", y);
            break;
        case 20:
            y = (1.7 * x) + 0.09;
            printf("y = %0.2f\n", y);
            break;
        default:
            printf("Fuck you !!\n");
            break;

    }
    return 0;
}
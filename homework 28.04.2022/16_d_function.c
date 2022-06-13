#include <stdio.h>

int main()
{
    double x;
    int y;
    printf("Enter the value of x : ");
    scanf("%lf",&x);

    int flag = -100;
    if(x==0) flag=10;
    else if(x>0)flag=20;
    else flag=30;

    switch(flag)
    {
        case 10: y=0; printf("y=%d\n", y); break;
        case 20: y=-1; printf("y=%d\n", y); break;
        case 30: y=1; printf("y=%d\n", y); break;
        default: printf("Something went wrong.\n"); break;
    }
    return 0;
}
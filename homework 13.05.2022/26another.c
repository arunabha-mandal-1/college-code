
#include<stdio.h>
#include<conio.h>
 
int main()
{
    int i, n;
    float x, sum, t;
    // clrscr();
     
    printf(" Enter the value for x : ");
    scanf("%f",&x);
     
    printf(" Enter the value for n : ");
    scanf("%d",&n);
     
    x=x*3.14159/180;
    t=x;
    sum=x;
     
    /* Loop to calculate the value of Sine */
    for(i=1;i<=n;i++)
    {
        int temp = 2*i*(2*i+1);
        t=(t*(-1)*x*x)/temp;
        sum=sum+t;
    }
     
    printf(" The value of Sin(%f) = %.4f",x,sum);
    return 0;
}
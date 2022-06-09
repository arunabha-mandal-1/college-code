#include <stdio.h>
#include <math.h>
#include <ctype.h>

double func(double, double);
int main()
{
while(1)
{
    char choice;
    printf("Do you want to quit(y/any other key) : ");
    scanf("%c", &choice);
    if(tolower(choice)=='y')return 0;
    double x=0, n=0;
    printf("Enter value of x : ");
    scanf("%lf", &x);
    printf("Enter value of n : ");
    scanf("%lf", &n);
    printf("Answer is %0.3lf\n", func(x,n));
    getchar();
}

return 0;
}

double func(double x, double n)
{
if(n==1)return(x+1);
else if(n==2)return(1+(x/n));
else if(n>3 || n<1)return(1+(n*x));
return(1+pow(x, n));
}
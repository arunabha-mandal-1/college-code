// gcd, lcm
#include <stdio.h>

int gcd(int, int);
int lcm(int,int);

int main()
{
int a,b;
printf("Enter first number : ");
scanf("%d", &a);
printf("Enter second number : ");
scanf("%d", &b);

printf("GCD = %d\n", gcd(a,b));
printf("LCM = %d\n", lcm(a,b));
}

// gcd
int gcd(int a, int b)
{
if(a==0&& b==0)
{
    printf("Math error(gcd)\n");
    return -1;
}
if(b==0)return a;
return gcd(b, a%b);
}
//lcm
int lcm(int a, int b)
{
if(a==0 && b==0){return 0;}
if(gcd(a,b)==0)return 0;
return (a*b)/gcd(a,b);
}

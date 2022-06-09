#include <stdio.h>

// 1. factorial of a number recursively
int factorial(int n);
// 2. combination
int combination(int n, int r);
// 3. x to the power n
int xToThePower_n(int x, int n);

int main(void)
{
while(1)
{
    int choice;
    printf("Which operation do you want to perform?\n");
    printf("1.n factorial\n2.nCr\n3.x to the power n\n4.Quit\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    if(choice<1||choice>4) {printf("Enter correct choice.\n");}
    else if(choice==4) return 0;
    else if(choice==1)
    {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("%d! is %d\n\n",n, factorial(n));
    }
    else if(choice==2)
    {
    int n, r;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter r : ");
    scanf("%d", &r);
    printf("%dC%d is %d\n\n",n, r, combination(n, r));
    }
    else if(choice==3)
    {
    int x, n;
    printf("Enter x : ");
    scanf("%d", &x);
    printf("Enter n : ");
    scanf("%d", &n);
    printf("%d to the power %d is %d\n\n", x, n, xToThePower_n(x, n));
    }
}
return 0;
}

// 1
int factorial(int n)
{
if(n<0) return -1;
else if(n<2) return 1;
return n*factorial(n-1);
}
// 2
int combination(int n, int r)
{
if(r>n) return -1;
return factorial(n) / (factorial(r) * factorial(n-r));
}
// 3
int xToThePower_n(int x, int n)
{
if(n==0) return 1;
return x * xToThePower_n(x, n-1);
}
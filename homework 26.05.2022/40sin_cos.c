#include <stdio.h>
#include <math.h>

int factorial(int);
double sin_(double);
double cos_(double);

int main()
{
// printf("%0.3f\n", sin_(10));
// printf("%0.3f\n", sin(10));
double x;
printf("Enter x : ");
scanf("%lf", &x);

printf("sin(%lf) = %0.3lf\n", x, sin_(x));
printf("cos(%lf) = %0.3lf\n", x, cos_(x));

return 0;
}

int factorial(int n)
{
if(n<0)return -1;
if(n==0) return 1;
return n*factorial(n-1);
}

double sin_(double x)
{
x = (x*3.14)/180;
double sum = 0.00;
for(int i=0; i<15; i++)
{
    // using values separately
    double sign = pow((double)-1, (double)i);
    double termOfx = pow((double)x, (double)(2*i+1));
    double fact = (double)factorial(2*i+1);
    sum += (sign*termOfx) / fact;
}
return sum;
}

double cos_(double x)
{
// using everything together
x = (x*3.14)/180;
double sum = 0.00;
for(int i=0; i<15; i++)
    {sum += (pow(-1.00, i)*pow(x, (2.00*i))) / factorial(2*i);}
return sum;
}
#include <stdio.h>
#include <math.h>

unsigned long long int factorial(int);
double sin_(double);

int main()
{
    double x;
    printf("Enter x : ");
    scanf("%lf", &x);

    printf("sin(%0.3lf) = %0.3lf\n", x, sin_(x));
    // printf("sin(%lf) = %0.3lf\n", x, sin(x * (3.14 / 180))); // inbuilt

    return 0;
}

unsigned long long int factorial(int n)
{
    if (n < 0)
        return -1;
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

double sin_(double x)
{
    x = (x * 3.14) / 180.00;
    double sum = 0;
    for (int i = 0; i < 15; i++)
    {
        // using values separately
        double sign = pow(-1, i);
        long double termOfx = pow(x, (2 * i + 1));
        long double fact = factorial(2 * i + 1);
        sum += (sign * termOfx) / fact;
    }
    return sum;
}

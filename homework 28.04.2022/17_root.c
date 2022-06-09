#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;

    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    printf("c = ");
    scanf("%lf", &c);


    if(a==0 && b==0)
    {
        printf("No solution.\n");
        return 0;
    }
    else if(a == 0)
    {
        printf("Only one root.\n");
        printf("x = %0.3lf\n", -c/b);
        return 0;
    }
    else if((b*b) - (4*a*c) < 0)
    {
        printf("No real roots.\n");
        return 0;
    }
    else if((b*b) - 4*a*c == 0)
    {
        printf("Two roots are same.\n");
        printf("x = %0.3lf\n", -b/(2.00*a));

        return 0;
    }
    else
    {
        double root1 = (-b + sqrt((b*b) - (4*a*c))) / (2*a);
        double root2 = (-b - sqrt((b*b) - (4*a*c))) / (2*a);

        printf("x1 = %0.3lf\n", root1);
        printf("x2 = %0.3lf\n", root2);
        return 0;
    }
}
// simple and compound interest
#include <stdio.h>
#include <math.h>

int main(void)
{
    float p, n, r;
    printf("Enter p, n, r : ");
    scanf("%f %f %f", &p, &n, &r);

    float simple = (p * n * r)/100.0;
    float compound = p*pow((1 + (r/100.0)), n) - p;

    printf("Simple interest : %0.2f\n", simple);
    printf("Compound interest : %0.2f\n", compound);

    return 0;
}
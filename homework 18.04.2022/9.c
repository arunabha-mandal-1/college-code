#include <stdio.h>

int main(void)
{
    float decimalNumber;
    printf("Enter a decimal number : ");
    scanf("%f", &decimalNumber);

    printf("The smallest integer not less than %f is %d\n", decimalNumber, (int)decimalNumber + 1);
    printf("The largest integer not greater than %f is %d\n", decimalNumber, (int)decimalNumber);
    return 0;
}
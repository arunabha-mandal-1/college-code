#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;
    printf("Enter a decimal number : ");
    scanf("%f", &n);

    // printf("The smallest integer not less than the number is %d\n", (int)ceil(n));
    // printf("The largest integer not greater than the number is %d\n", (int)floor(n));


    printf("The smallest integer not less than the number is %d\n", (int)n + 1);
    printf("The largest integer not greater than the number is %d\n", (int)n);



    return 0;

}
// rightmost and leftmost part of integral part of a floatint point number
#include <stdio.h>

int main()
{
    double number;
    printf("Enter a floating point number : ");
    scanf("%lf", &number);

    int numberInt = (int)number;
    if(numberInt / 10 == 0)
    {
        printf("The integral part consists a single number.\n");
        return 0;
    }

    int rightMost = numberInt % 10;
    int leftMost;
    while(numberInt / 10 != 0)
    {
        numberInt /= 10;
    }
    leftMost = numberInt;

    printf("Rightmost number of the integral part is %d\n", rightMost);
    printf("Leftmost number of the integral part is %d\n", leftMost);

    return 0;
}
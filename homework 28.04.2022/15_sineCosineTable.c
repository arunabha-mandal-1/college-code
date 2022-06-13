// sin, cos, tan table
#include <stdio.h>
#include <math.h>

int main()
{
    // printf("sin(0) = %0.2f\nsin(15) = %0.2f\nsin(30) = %0.2f\nsin(45)) = %0.2f\nsin(60) = %0.2f\nsin(75) = %0.2f\nsin(90) = %0.2f\n\n", sin(0), sin(15), sin(30), sin(45), sin(60), sin(75), sin(90));

    // printf("cos(0) = %0.2f\ncos(15) = %0.2f\ncos(30) = %0.2f\ncos(45)) = %0.2f\ncos(60) = %0.2f\ncos(75) = %0.2f\ncos(90) = %0.2f\n\n", cos(0), cos(15), cos(30), cos(45), cos(60), cos(75), cos(90));
    
    // printf("tan(0) = %0.2f\ntan(15) = %0.2f\ntan(30) = %0.2f\ntan(45)) = %0.2f\ntan(60) = %0.2f\ntan(75) = %0.2f\ntan(90) = %0.2f\n\n", tan(0), tan(15), tan(30), tan(45), tan(60), tan(75), tan(90));

    printf("x\tsix(x)\tcos(x)\ttan(x)\n");
    printf("---\t---\t---\t---\n");
    for(int x=0; x<=90; x+=15)
    {
        double angleInRadian = x*(3.14/180);
        printf("%d\t%0.3lf\t%0.3lf\t%0.3lf\n", x, sin(angleInRadian), cos(angleInRadian), tan(angleInRadian));
    }
    printf("\n");
    return 0;

}
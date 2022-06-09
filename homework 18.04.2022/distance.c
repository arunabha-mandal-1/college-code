#include <stdio.h>
#include <math.h>

int main()
{
    double speed, time, distance;
    speed = 3 * pow(10.00, 8.00) * (18.00/5.00) * 365;

    printf("Enter year : ");
    scanf("%lf", &time);

    distance = time * speed;
    printf("Distance traveled in %lf yeas(s) is %0.2lf km\n", time, distance);

    return 0;
}
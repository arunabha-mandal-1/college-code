#include <stdio.h>
#include <math.h>

int main()
{
	double speed, distance, time;
	speed = 3 * pow(10,8) * (18.00/5.00) * 365.00;
	
	printf("Enter year : ");
	scanf("%lf", &time);
	
	distance = speed * time;
	printf("Distance traveled by light in %0.2lf year is %0.2lf km\n", time, distance);
	return 0;
}

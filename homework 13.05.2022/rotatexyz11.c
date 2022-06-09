#include <stdio.h>

int main(void)
{
	int x, y, z;
	printf("Enter three number x, y and z : ");
	scanf("%d%d%d", &x, &y, &z);
	
	int tempX = x;
	x = y;
	y = z;
	z = tempX;
	
	printf("Now \tx = %d\n\ty = %d\n\tz = %d\n", x, y, z);
	
	return 0;
}

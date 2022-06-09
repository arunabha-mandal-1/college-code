#include <stdio.h>
#include <stdbool.h>

int main()
{
	float x;
	float y;
	
	scanf("%f", &x);
	
	int flag;
	if(x > 1.0)
	{
		flag = 10;
	}
	else
	{
		flag = 20;
	}
	switch(flag)
	{
		case 20 : 
			y = 1.2*x + 0.98;
			printf("%f\n", y);
			break;
		case 10 :
			y = 1.7*x + 0.09;
			printf("%f\n", y);
			break;
	}
	
	return 0;
}

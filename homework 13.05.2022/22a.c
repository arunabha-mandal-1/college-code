#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	int i;
	int j;
	
	for(i = 1; i <= n; i++)
	{
		for(j = n; j >= 1; j--)
		{	
			if(j <= i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		for(; j < i - 1; j++)
		{
			printf("*");
		}
		printf("\n");	
	}
	
//	return 0;
}

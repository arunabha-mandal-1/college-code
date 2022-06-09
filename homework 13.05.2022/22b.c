#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	int i, j;
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(j >= i) printf("*");
			else printf(" ");
		}
		for(; j <= 2*n - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

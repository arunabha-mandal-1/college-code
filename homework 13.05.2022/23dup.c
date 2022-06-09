#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	char str[10];
	sprintf(str, "%d", n);
	int len = strlen(str);
	
	if(len == 1)	
	{
		printf("Single digit number.\n");
		return 0;
	}
	
	int i;
	for(i = 0; i < len/2; i++)
	{
		if(str[i] != str[len - i- 1])
		{
			printf("Not palindrome.\n");
			return 0;
		}
	}
	
	printf("Palindrome.\n");
	return 0;
}
	

// n fibonacci number
#include <stdio.h>

int fibonacci(int n)
{
if(n<0) return -1;
if(n==0) return 0;
if(n==1) return 1;
return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
int n;
printf("Enter the length of fibonacci series you want : ");
scanf("%d", &n);
for(int i=0; i<n; i++) printf("%d ", fibonacci(i));
printf("\n");

return 0;
}
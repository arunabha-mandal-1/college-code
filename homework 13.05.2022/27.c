#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("N = ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            sum += j;
        }
    }

    printf("Sum is %d\n", sum);
    return 0;
}
#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter the value for n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (n + 1) - i; j++)
        {
            printf("*");
        }
        for (k = 1; k < i; k++)
        {
            printf("  "); // two spaces
        }
        for (j = 1; j <= (n + 1) - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 2; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (k = 1; k <= n - i; k++)
        {
            printf("  "); // two spaces
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
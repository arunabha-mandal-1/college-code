#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j >= 1; j--)
        {
            if(j <= i) {printf("%d", j);}
            else {printf(" ");}
        }
        printf("\n");
    }
    return 0;
}
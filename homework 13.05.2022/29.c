#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        int temp = i;
        int j = 1;
        for(j; j <= (num - i); j++)
        {
            printf("   ");
        }
        for(j; j <= num; j++)
        {
            printf("%2d ", temp);
            temp++;
        }
        temp -= 2;
        for(int k = 1; k < i; k++)
        {
            printf("%2d ", temp);
            temp--;
        }
        printf("\n");
    }
    return 0;
}
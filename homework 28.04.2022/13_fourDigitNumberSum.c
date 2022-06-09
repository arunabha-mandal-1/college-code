#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a four digit number : ");
    scanf("%d", &num);

    // printf("%d", (int)log10(num) + 1);

    if(((int)log10(num) +1) == 4)
    {
        int sum = 0;
        while(num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        printf("The sum of digits are %d\n", sum);
        return 0;
    }
    else
    {
        return -1;
    }
}
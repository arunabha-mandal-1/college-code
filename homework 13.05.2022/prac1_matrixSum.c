#include <stdio.h>

#define pi 3.14

int main(void)
{
    int row = 3;
    int column = 3;
    int arr[4][4] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    int sum = 0;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(i == j)
            {
                // debug
                int temp = arr[i][j];

                sum += arr[i][j];
            }
            if(i != j && (i + j) == 2)
            {
                // debug
                int temp = arr[i][j];

                sum += arr[i][j];
            }
        }
    }

    printf("Sum is %d\n", sum);
    return 0;
}
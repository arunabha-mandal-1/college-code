// transpose, symmetric
#include <stdio.h>

int main(void)
{

    int arr[3][3];
    int row = 3, col = 3;
    for(int i = 0; i < row; i++)
    {
        printf("Enter %d row : ", i + 1);
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is : \n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // checking for symtric

    // though it's redundant
    if(row != col)
    {
        printf("The matrix is not symtric!\n");
        goto symLevel;
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = i; j < col; j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                printf("The matrix is not symtric!\n");
                goto symLevel;
            }
        }
    }

    printf("The matrix is symtric!\n");
    symLevel:

    // transposing the matrix 
    for(int i = 0; i < row; i++)
    {
        for(int j = i; j < col; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // printing the transposed matrix
    printf("The transposed matrix is : \n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
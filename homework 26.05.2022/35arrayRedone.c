#include <stdio.h>
#include <stdlib.h>
#define intPointer int*

// this one is done using dynamic memory allocation
int main(void)
{
int row = 0, col = 0;
printf("Enter no of rows : ");
scanf("%d", &row);
printf("Enter no of coloumns : ");
scanf("%d", &col);
if(row!=col)
    printf("The matrix is not symtric.\n");
int total = row * col;
intPointer mtrxPtr = (int*)malloc(total*sizeof(int));
if(mtrxPtr == NULL)
{   printf("Memory is not allocated.\n");
    return 0;
}
intPointer mtrxPtrTranspose = (int*)malloc(total*sizeof(int));
// int k = 0;
for(int i=0; i<row; i++)
{   
    printf("Enter %d row : ", i+1);
    for(int j=0; j<col; j++)
        scanf("%d", &mtrxPtr[(i*col) + j]);
    // scanf("%d", mtrxPtr[i]);
}
printf("The matrix is : \n");
for(int i=0; i<row; i++)
{   
    for(int j=0; j<col; j++)
        printf("%d\t", mtrxPtr[(i*col) + j]);
    printf("\n");
}
printf("Transposing.....\n");
int m = 0;
for(int i=0; i<col; i++)
{
    for(int j=0; j<row; j++)
        mtrxPtrTranspose[i*row + j] = mtrxPtr[i + (j*col)];
}
printf("Transposed matrix is : \n");
int tRow = col;
int tCol = row;
for(int i=0; i<tRow; i++)
{
    for(int j=0; j<tCol; j++)
        printf("%d\t", mtrxPtrTranspose[(i*tCol) + j]);
    printf("\n");
    // printf("%d ", mtrxPtrTranspose[i]);
}
printf("..........................................................................\n");
return 0;
}
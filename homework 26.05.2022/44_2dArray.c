#include <stdio.h>
#include <stdlib.h>

int main()
{
int row, col, biggest=INT_MIN, smallest=INT_MAX, sum=0, average=0;
printf("Row : ");
scanf("%d", &row);
printf("Column : ");
scanf("%d", &col);
int* ptr = (int*)malloc((row*col)*sizeof(int));
for(int i=0; i<row; i++)
{
    printf("Enter %d row : ", i+1);
    for(int j=0; j<col; j++)
        scanf("%d", &ptr[(col*i)+j]);
}
for(int i=0; i<row; i++)
{
    for(int j=0; j<col; j++)
    {
    printf("%d\t", ptr[(col*i)+j]);
    if(ptr[(col*i)+j]>biggest) biggest = ptr[(col*i)+j];
    if(ptr[(col*i)+j]<smallest) smallest = ptr[(col*i)+j];
    sum += ptr[(col*i)+j];
    }
    printf("\n");
}
printf("Smallest number is %d\n", smallest);
printf("Biggest number is %d\n", biggest);
printf("Average is %0.3f\n", sum/(row*col*1.0));
return 0;
}
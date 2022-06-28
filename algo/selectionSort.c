#include <stdio.h>

void selection(int[], int);
int smallest(int[], int, int, int);

int main()
{
    int arr[] = {4, 5, 1, 3, 2};
    selection(arr, 5);
    for(int i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void selection(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int temp = arr[i];
        int index = smallest(arr, i, n, i);
        arr[i] = arr[index];
        arr[index] = temp;
    }
}
int smallest(int arr[], int i, int n, int pos)
{
    for(int j=i+1; j<n; j++)
    {
        if(arr[j]<arr[pos])
        {
            pos=j;
        }
    }
    return pos;
}
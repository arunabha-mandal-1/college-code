#include <stdio.h>

int main(void)
{
    int arr[4] = {1, 10, 100, 1000}, i = 2;
    printf("%d\t%d", *arr + i, *(arr + i)); // here arr == base address but *arr = 1 so ans is , 3  1000
    
    return 0;
}
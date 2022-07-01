#include <stdio.h>

int interpolationSearch(int [], int, int, int);
int main()
{
    int arr[8] = {2, 3, 6, 8, 10, 13, 16, 18};
    int flag = interpolationSearch(arr, 0, 7, 4);
    if(flag == -1)
        printf("Not found.\n");
    else
        printf("Found at %d index.\n", flag);
    
    return 0;
}
int interpolationSearch(int arr[], int start, int end, int element)
{
    int index = start + ((element - arr[start]) * (end - start))/(arr[end] - arr[start]);
    if(start > end)
        return -1;
    if(element < arr[start])
        return -1;
    if(element > arr[end])
        return -1;
    if(arr[index]==element)
        return index;
    else if(element < arr[index])
        return interpolationSearch(arr, start, index-1, element);
    else if(element > arr[index])
        return interpolationSearch(arr, index+1, end, element);
}

// https://www.scaler.com/topics/data-structures/interpolation-search-algorithm/
// https://www.geeksforgeeks.org/interpolation-search/
#include <stdio.h>

int binarySearch(int [], int, int, int);
int main(){
    int arr[6] = {3, 4, 5, 7, 8, 12};
    int flag = binarySearch(arr, 0, 5, 7);
    if(flag==-1)
        printf("Not found.\n");
    else
        printf("Found at %d index.", flag);
    return 0;
}

int binarySearch(int arr[], int start, int end, int element){
    int mid = start + (end - start) / 2;
    if(start > end)
        return -1;
    if(arr[mid]==element)
        return mid;
    else if(element < arr[mid])
        return binarySearch(arr, start, mid-1, element);
    else if(element > arr[mid])
        return binarySearch(arr, mid+1, end, element);
    // return -1;
}

// https://www.geeksforgeeks.org/binary-search/
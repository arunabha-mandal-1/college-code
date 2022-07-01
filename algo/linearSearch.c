#include <stdio.h>

int linearSearch(int [], int, int);
int main(){
    int arr[6] = {2, 1, 4, 3, 5, 9};
    int flag = linearSearch(arr, 6, 3);
    if(flag==-1)
        printf("Not found.\n");
    else
        printf("Found at %d index.", flag);
    return 0;
}

int linearSearch(int arr[], int size, int element){
    for(size_t i=0; i<size; i++){
        if(arr[i]==element) 
            return i;
    }
    return -1;
}

// https://www.geeksforgeeks.org/linear-search/
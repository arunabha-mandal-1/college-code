#include <stdio.h>

struct Random
{
    int count;
    int* p;
}r1, *ptr;

int main()
{
    ptr = &r1;
    int arr[5] = {1, 2, 3, 4, 5};
    ptr->count = 10;
    ptr->p = arr;

    // experiment
    // (higher precedence => ->, ., (), {})

    // fetches what p points to
    printf("%d %d\n", arr[0],( *ptr->p));
    printf("%x %x\n", arr, ptr->p);

    // increments p after accessing value
    printf("%d\n", *ptr->p++);
    printf("%d\n", *ptr->p);
    *ptr->p--;

    // increments where p points to
    printf("%d\n", (*ptr->p)++);
    printf("%d\n", *ptr->p);
    printf("%d\n", arr[0]--);

    

    return 0;
}
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 23;

    printf("The value of a before swapping %d\n", a);
    printf("The value of b before swapping %d\n", b);

    // swaping 
    int temp = a;
    a = b;
    b = temp;

    printf("\nThe value of a after swapping %d\n", a);
    printf("The value of b after swapping %d\n", b);

    return 0;
}
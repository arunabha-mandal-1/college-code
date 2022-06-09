#include <stdio.h>

int main()
{
    int a = 7;
    printf("%d\n", a);
    printf("%5d\n", a);
    printf("%0.00005d\n", a);
    printf("%0.5d\n", a);


    char str[] = "Arunabha";
    printf("%4.2s\n", str);
    printf("%-0.5s\n", str);
    printf("%0.55s\n", str);
    return 0;
}
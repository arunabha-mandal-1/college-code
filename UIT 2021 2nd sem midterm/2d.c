#include <stdio.h>

int fun(int n)
{
    static int r = 0;
    if(n <= 0) return 1;
    if(n > 3)
    {r = n; return fun(n - 2) + 2;}
    return fun(n - 1) + r;
}

int main()
{
    int a = fun(9);
    printf("%d\n", a);

    return 0;
}
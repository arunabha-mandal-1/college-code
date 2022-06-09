#include <stdio.h>

int main(int argc, char const *argv[])
{
    static int a = 10;
    a = 5;
    printf("%d\n", a);
    return 0;
}

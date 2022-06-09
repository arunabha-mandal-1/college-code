#include <stdio.h>

int main()
{
    static int a = 9;
    printf("%d\n", --a);
    if(a) // program will run untill and unless a == 0 even if a == -1 it will run but here main func will not be called after a == 1
        main();
    return 0;

    //output ==> 9 8 7 6 5 4 3 2 1 0
}
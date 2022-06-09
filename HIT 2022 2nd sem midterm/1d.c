#include <stdio.h>

// study this
int main(){

    int x = 0, y = 1, z = 4, r;
    r = x && y++ && ++z;
    printf("x=%d y=%d z=%d r=%d\n", x, y, z, r); // 0, 2, 5, 0
    r = x || ++y && ++z;
    printf("x=%d y=%d z=%d r=%d\n", x, y, z, r); // 

    return 0;
}
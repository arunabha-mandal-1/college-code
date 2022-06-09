#include <stdio.h>

int main(){
    printf("\n%d\t%d\t%d", 2147483647, 2147483647 + 1, 2147483647 + 10);

    // ans => integer ovreflow warning
    return 0;
}
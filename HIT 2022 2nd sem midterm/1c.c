#include <stdio.h>

int main(){

    for(int i = 1; i <= 5; i++){
        if(i%2)
            continue;
        printf("%d ", i);
    }

    // ans => 2 4
    return 0;
}
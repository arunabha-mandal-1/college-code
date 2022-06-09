#include <stdio.h>

int main(){

    int num = 0;
    int sum = 0;
    int x = 12;
    // scanf("%d", &num);
    while(num != x){
        scanf("%d", &num);
        sum += num;
    }
    printf("%d\n", sum);
    return 0;
}
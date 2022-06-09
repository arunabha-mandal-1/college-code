#include <stdio.h>

int add(int a, int b){
    return (a+b);
}
int main(){
    int x, y;
    printf("Enter two numbers : ");
    scanf("%d", &x);
    scanf("%d", &y);

    int ans = add(x,y);
    printf("Sum is %d", ans);
    return 0;
}
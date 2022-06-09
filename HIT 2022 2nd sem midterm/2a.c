#include <stdio.h>

int fibo(int n){
    if(n <= 0) return -1;
    else if(n <= 2) return (n-1);
    return fibo(n - 1) + fibo(n - 2); 
}
int main(){

    int n = 6;
    printf("=> %d \n", fibo(n));

    return 0;
}
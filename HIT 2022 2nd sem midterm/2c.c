#include <stdio.h>
#include <math.h>

int numberOfDigits(int n){
    int count = 0;
    while( n > 0){
        count++;
        n /= 10;
    }
    return count;
}
int main(void){

    int n = 0;
    printf("Enter a number to check whether or not it's armstrong : ");
    scanf("%d", &n);
    int temp = n;

    int sum = 0;
    while(temp > 0){
        int rem = temp % 10;
        sum += pow(rem, numberOfDigits(n));
        temp /= 10;
    }

    if(sum == n){
        printf("This is an armstrong number.\n");
    }else{
        printf("Oh fuck! This is not an armstrong number.\n");
    }

    return 0;
}
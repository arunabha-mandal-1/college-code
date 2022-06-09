#include <stdio.h>

int numberOfDigit(int n){
    int count = 0;
    while(n > 0){
        n /= 10;
        count++;
    }
    return count;
}
int main(){

    int number;
    printf("Enter the number : ");
    scanf("%d", &number);

    if(number == 0){
        printf("Number of digits in 0 is 1\n");
        return 0;
    }

    int ans = numberOfDigit(number);
    printf("Number of digits in %d is %d\n", number, ans);
    return 0;
}
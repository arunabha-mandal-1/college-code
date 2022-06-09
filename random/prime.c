#include <stdio.h>
#include <stdbool.h>

int isPrime(int number){
    int c = 2;
    while(c*c < number){
        if(number % c == 0){
            return false;
        }
        c++;
    }
    return true;
}

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if(num < 2){
        printf("Neither prime nor composite\n");
        return 0;
    }
    if(isPrime(num)){
        printf("Prime\n");
    }else{
        printf("Not Prime\n");
    }
}
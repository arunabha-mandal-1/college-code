#include <stdio.h>

int main(void){
    int number;
    int sum = 0, count = 0;

    for(int i = 0; i < 10; i++){
        printf("Enter %d no number : ", i+1);
        scanf("%d", &number);
        if(number > 0){
            count++;
            sum += number;
        }
    }

    printf("Sum is %d\n", sum);
    printf("No of positive number is %d\n", count);

    return 0;
}
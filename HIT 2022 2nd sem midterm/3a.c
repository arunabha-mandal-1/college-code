#include <stdio.h>
#include <stdlib.h>

int main(void){

    int number = 0;
    printf("Enter the number : ");
    scanf("%d", &number);
    int temp = number;
    if(number == 0) {printf("0\n");}

    int count = 0;
    int *ptr = (int *) malloc(count * sizeof(int));
    while(number > 0){
        int rem = number % 10;
        count++;
        ptr = realloc(ptr, count * sizeof(int));
        ptr[count - 1] = rem;
        number /= 10;
    }


    for(int i = 0; i < count; i++){
        for(int j = count - i - 1; j >= 0; j--){
            printf("%d ", ptr[j]);
        }
        printf("\n");
    }

    free(ptr);
    return 0;
}
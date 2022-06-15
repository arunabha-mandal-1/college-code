#include <stdio.h>
#include <stdlib.h>

int main()
{
    char numbers[][6] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int number, count = 0;
    printf("Enter the number : ");
    scanf("%d", &number);
    int temp = number;
    if(temp<0){
        printf("Minus ");
        temp = -temp;
    }
    int *ptr = (int *)malloc(count * sizeof(int));
    // printf("%x\n", ptr);
    if(ptr==NULL) return 1;

    while(temp > 0)
    {
        int rem = temp % 10;
        count++;
        ptr = (int *)realloc(ptr, count * sizeof(int));
        ptr[count - 1] = rem;
        temp /= 10;
    }

    for(int i = count - 1; i >= 0; i--)
    {
        if(ptr[i] == 0) {printf("%s ", numbers[0]);}
        else if(ptr[i] == 1) {printf("%s ", numbers[1]);}
        else if(ptr[i] == 2) {printf("%s ", numbers[2]);}
        else if(ptr[i] == 3) {printf("%s ", numbers[3]);}
        else if(ptr[i] == 4) {printf("%s ", numbers[4]);}
        else if(ptr[i] == 5) {printf("%s ", numbers[5]);}
        else if(ptr[i] == 6) {printf("%s ", numbers[6]);}
        else if(ptr[i] == 7) {printf("%s ", numbers[7]);}
        else if(ptr[i] == 8) {printf("%s ", numbers[8]);}
        else if(ptr[i] == 9) {printf("%s ", numbers[9]);}
    }

    return 0;
}
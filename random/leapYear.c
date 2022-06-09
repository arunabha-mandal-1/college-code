#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year){
    if(year%4 == 0){
        if(year%100 == 0){
            if(year%400 ==0){
                return true;
            }else{
                return false;
            }
        }else{
            return true;
        }
    }else{
        return false;
    }
}

int main(){

    int year;
    printf("Enter year : ");
    scanf("%d", &year);

    if(isLeapYear(year)){
        printf("Leap Year\n");
    }else{
        printf("Not Leap Year\n");
    }
    return 0;
}
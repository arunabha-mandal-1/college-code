#include <stdio.h>

int main(void)
{
    int secondsTotal;
    printf("Enter seconds : ");
    scanf("%d", &secondsTotal);

    int days = secondsTotal / (60 * 60 *24); // apply

    int secondsLeft = secondsTotal % (60 * 60 *24);
    int hours = secondsLeft / (60 * 60); // apply

    secondsLeft = (secondsLeft) % (60 * 60);
    int minutes = secondsLeft / 60; // apply
    
    secondsLeft = secondsLeft % 60; // apply


    printf("%d days %d hours %d minues %d seconds", days, hours, minutes, secondsLeft);

    return 0;
}
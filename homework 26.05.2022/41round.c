// rounding and print in words
#include <stdio.h>
#include <string.h>

void round_dup(float);
int main()
{
    float x;
    printf("Enter a floating point number : ");
    scanf("%f", &x);
    round_dup(x);

    return 0;
}

void round_dup(float x)
{
printf("Number in digit : %0.2f\n", x);
printf("Number in words : ");
char numStr[10];
sprintf(numStr, "%0.2f", x);
int numLen = strlen(numStr);
for(int i=0; i<numLen; i++)
{
    switch(numStr[i])
    {
        case '1': printf("One ");break;
        case '2': printf("Two ");break;
        case '3': printf("Three ");break;
        case '4': printf("Four ");break;
        case '5': printf("Five ");break;
        case '6': printf("Six ");break;
        case '7': printf("Seven ");break;
        case '8': printf("Eight ");break;
        case '9': printf("Nine ");break;
        case '0': printf("Zero ");break;
        case '.': printf("Point ");break;
    }
}
printf("\n");
return;
}
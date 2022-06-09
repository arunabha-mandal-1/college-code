#include <stdio.h>

int main()
{
    float a = 10.36;
    float b = 2.52;

    float rem = (int)a % (int)b; // valid
    // float rem = a % (int)b; // not valid
    // float rem = a % b; // not valid


    // % does not accept floating point number


    // int rem2 = 2 % 1.5; // not valid
    int rem3 = 2 % 5;
    printf("%d\n", rem3);

}
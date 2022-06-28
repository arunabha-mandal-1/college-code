#include <stdio.h>

struct Date
{
    unsigned int day : 5; // range 0 to 2 to the power 5 minus 1
    unsigned int month : 4; // range 0 to 2 to the power 4 minus 1
    unsigned int year;
};

struct DateDup
{
    int day : 5;
    int month : 4;
    int year;
};

int main()
{
    printf("%d\n", sizeof(struct Date));

    struct Date date;
    date.day = 31;
    date.month = 12;
    date.year = 2033;

    printf("%d/%d/%d\n", date.day, date.month, date.year);


    printf("%d\n", sizeof(struct DateDup));

    struct DateDup dateDup;
    dateDup.day = 31;
    dateDup.month = 12;
    dateDup.year = 2014;

    printf("%d/%d/%d\n", dateDup.day, dateDup.month, dateDup.year);
    // The output comes out to be negative. What happened behind is that the value 31 was stored in 5 bit signed integer which is equal to 11111. The MSB is a 1, so it’s a negative number and you need to calculate the 2’s complement of the binary number to get its actual value which is what is done internally. By calculating 2’s complement you will arrive at the value 00001 which is equivalent to decimal number 1 and since it was a negative number you get a -1. A similar thing happens to 12 in which case you get 4-bit representation as 1100 which on calculating 2’s complement you get the value of -4.

    
    return 0;
}
// Array of structures
#include <stdio.h>

struct Student
{
    int id;
    char name[30];
    int marks;
}s[5];

int main()
{
    s[0].id=0;
    //....we can use it this way

    struct Student newStud[2];
    newStud[0].id = 50;
    //....this is another way
    return 0;
}
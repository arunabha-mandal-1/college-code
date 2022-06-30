#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    int marks;
}stud[5], *ptr;

int main()
{
    // ptr = &stud[0];
    ptr = stud;
    /*
        This assignment would assign the address of the 0th element to ptr, ptr will point to stud[0]. It's member can be accessed using
        the symbol '->'(member selection operator)
    */
   printf("...\n");
   return 0;
}

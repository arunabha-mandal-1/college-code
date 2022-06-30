#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int roll;
    char name[30];
    int marks;
} stud;

int main()
{
    stud s1, s2;

    s1.roll = 1;
    strcpy(s1.name, "John");
    s1.marks = 65;


    s2.roll = 2;
    strcpy(s2.name, "Marty");
    s2.marks = 85;

    // s1=s2;
    printf("%s %s\n", s1.name, s2.name);
    printf("%d %d\n", s1.roll, s2.roll);
    printf("%d %d\n", s1.marks, s2.marks);

    return 0;
}
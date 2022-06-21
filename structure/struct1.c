// structures and functions

#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int id;
    char name[20];
    int marks;
} Stud;
void studentManipulate1(struct Student);
void studentManipulate2(int, char*, int);
void studentManipulate3(struct Student*);

int main()
{
    Stud s1;
    strcpy(s1.name, "Arunabha Mandal");
    s1.id = 235;
    s1.marks = 58;

    // ...1
    studentManipulate1(s1);
    printf("---------------------------------\n");
    // ...2
    studentManipulate2(s1.id, s1.name, s1.marks);
    printf("---------------------------------\n");
    // ...3
    Stud *s1Ptr;
    s1Ptr = &s1;
    studentManipulate3(s1Ptr);
    return 0;
}

// method 1(passing copy of the entire function)
void studentManipulate1(struct Student s)
{
    printf("Name = %s\n", s.name);
    printf("ID = %d\n", s.id);
    printf("Marks = %d\n", s.marks);
}
// method 2(passing each member of the structure individually)
void studentManipulate2(int id, char* name, int marks)
{
    printf("Name = %s\n", name);
    printf("Id = %d\n", id);
    printf("Marks = %d\n", marks);
}
// method 3(passing pointer to the structure)
void studentManipulate3(struct Student* ptr)
{
    printf("Name = %s\n", (*ptr).name); // also valid syntax
    printf("Name = %s\n", ptr->name);
    printf("ID = %d\n", ptr->id);
    printf("Marks = %d\n", ptr->marks);
}
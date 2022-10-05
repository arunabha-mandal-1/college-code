// Author : Arunabha Mandal(Kittu)
// Date : 20.09.2022
// All about simple array based stack
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10 // cuz it's not dynamic; fixed in size

// defining prototype of stack
typedef struct ArrayStack{
    int top;
    int capacity;
    int *array;
}Stack;

// create stack
Stack *Create(){
    Stack *myStack = (Stack*)malloc(sizeof(Stack));
    if(!myStack){
        return NULL;
    }
    myStack->capacity = MAXSIZE;
    myStack->top = -1;
    myStack->array = (int*)malloc(sizeof(int)*(myStack->capacity));
    if(!myStack->array){
        return NULL;
    }
    return myStack;
}

// checking if it's empty
int isEmpty(Stack *myStack){
    if(!myStack){
        printf("Stack doesn't exist.\n");
        return INT_MIN;
    }
    return (myStack->top==-1);
}

// checking if it's full
int isFull(Stack *myStack){
    if(!myStack){
        printf("Stack doesn't exist.\n");
        return INT_MIN;
    }
    return (myStack->top==myStack->capacity-1);
}

// adding an element
void push(Stack *myStack, int data){
    if(!myStack){
        printf("Stack doesn't exist.\n");
        return;
    }
    // myStack->top == myStack->capacity - 1 => indicates the stack is full
    if(isFull(myStack)){
        printf("Stack overflow!\n");
    }else{
        myStack->array[++(myStack->top)]=data;
    }
}

// removing an element from top
int pop(Stack *myStack){
    if(!myStack){
        printf("Stack doesn't exist.\n");
        return INT_MIN;
    }
    // myStack->top == -1 => indicates the stack is empty
    if(isEmpty(myStack)){
        printf("Stack underflow!\n");
        return INT_MIN;
    }else{
        // removing element from top and reducing top by 1
        return(myStack->array[(myStack->top)--]);
    }
}

// delete stack
void deleteStack(Stack *myStack){
    if(myStack){
        if(myStack->array){
            free(myStack->array);
        }
        free(myStack);
    }
}

// traverse
void traverse(Stack *myStack){
    if(!myStack){
        printf("Stack doesn't exist.\n");
        return;
    }
    int tempTop = myStack->top;
    if(tempTop==-1){
        printf("Stack is empty.\n");
        return;
    }
    printf("Elements are : ");

    // one method to print in the reverse order
    // while(tempTop!=-1){
    //     printf("%d ", myStack->array[tempTop]);
    //     tempTop=tempTop-1;
    // }

    // another method
    int i=0;
    while(i<=tempTop){
        printf("%d ", myStack->array[i]);
        i++;
    }
    printf("\n");
}
int main(){

    // creating
    Stack *myStack1 = Create(); // remember the max-size is 10

    // checking if it's empty
    int empty = isEmpty(myStack1);;
    printf("Empty status1 : %d\n", empty);

    traverse(myStack1); // checking, traversing

    // pushing
    push(myStack1, 1);
    push(myStack1, 2);
    push(myStack1, 3);
    push(myStack1, 4);
    push(myStack1, 5);

    // checking if the stack is full
    int full = isFull(myStack1);
    printf("Full status1 : %d\n", full);

    push(myStack1, 6);
    push(myStack1, 7);
    push(myStack1, 8);
    push(myStack1, 9);
    push(myStack1, 10);
    push(myStack1, 11); // overflow
    // pop(myStack1); // popping

    // traversing
    traverse(myStack1);

    // checking if the stack is full
    full = isFull(myStack1);
    printf("Full status2 : %d\n", full);

    // checking if it's empty
    empty = isEmpty(myStack1);
    printf("Empty status2 : %d\n", empty);


    // popping
    int popStatus = pop(myStack1);
    traverse(myStack1);

    // deleting stack
    deleteStack(myStack1);
    myStack1=NULL; // otherwise the next traverse is throwing grabage values

    // isEmpty(myStack1); // just checking lol

    traverse(myStack1);
    return 0;
}
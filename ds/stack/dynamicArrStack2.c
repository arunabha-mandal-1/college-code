// Author : Arunabha Mandal
// Date : 21.9.2022
// The idea is increasing stack size by to push an element in the stack...successfully implemented hue hue

#include <stdio.h>
#include <stdlib.h>

// prototype for stack
typedef struct Stack{
    int top;
    int capacity;
    int *array;
}Stack;

// creating stack
Stack *create(){
    Stack *myStack = (Stack*)malloc(sizeof(Stack));
    if(!myStack){
        return NULL;
    }
    myStack->top=-1;
    myStack->capacity=0;
    myStack->array=(int*)malloc(sizeof(int)*(myStack->capacity));
    if(!(myStack->array)){
        return NULL;
    }
    return myStack;
}

// checking whether stack is full
int isFull(Stack *myStack){
    return ((myStack->top)==(myStack->capacity)-1);
}

// checking if the stack is empty
int isEmpty(Stack *myStack){
    return (myStack->top==-1);
}

// push
void push(Stack *myStack, int data){
    // suppose we pushed 10 elements and then popped 5 elements, 5 empty spaces left
    // now if we want to add 5 elements again we can use that space
    // that's why we are checking this 
    if(isFull(myStack)){
        myStack->capacity = myStack->capacity + 1;
        myStack->array = (int*)realloc(myStack->array, (myStack->capacity)*sizeof(int));
    }
    myStack->array[++(myStack->top)]=data;
}

// to get the top element
int top(Stack *myStack){
    if(isEmpty(myStack)){
        return INT_MIN;
    }
    return myStack->array[myStack->top];
}

// popping
int pop(Stack *myStack){
    if(isEmpty(myStack)){
        return INT_MIN;
    }
    return myStack->array[(myStack->top)--];
}

// deleting stack
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

// main function
int main(){
    Stack *myStack = create();
    push(myStack, 20);
    push(myStack, 30);
    push(myStack, 40);
    push(myStack, 50);
    traverse(myStack);

    int pop1 = pop(myStack);
    int pop2 = pop(myStack);

    push(myStack, 100);
    push(myStack, 110);
    traverse(myStack);
    return 0;
}
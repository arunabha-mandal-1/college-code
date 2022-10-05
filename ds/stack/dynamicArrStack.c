// Author : Arunabha Mandal
// Date : 21/09/2022
// Stack using dynamic array. Each time stack is getting filled, we are doubling size to add new element.

// imo other thing we could do is increasing stack size by 1 each time we push an element

#include <stdio.h>
#include <stdlib.h>

// prototype of stack
typedef struct Stack{
    int top;
    int capacity;
    int *array;
}Stack;

// create stack
Stack *createStack(){
    Stack *myStack = (Stack*)malloc(sizeof(Stack));
    if(!myStack){
        return NULL;
    }
    myStack->capacity = 1;
    myStack->top = -1;
    myStack->array = (int*)malloc((myStack->capacity)*sizeof(int)); // initially we are allocating space for 1 element
    if(!myStack->array){
        return NULL;
    }
    return myStack;
}


// checking if the stack is full
int isFull(Stack *myStack){
    return(myStack->top == myStack->capacity-1);
}

// doubling stack size
void doubleStack(Stack *myStack){
    myStack->capacity = 2*(myStack->capacity);
    myStack->array = (int*)realloc(myStack->array, (myStack->capacity)*sizeof(int));
}

// push element
void push(Stack *myStack, int data){
    // no overflow in this case
    if(isFull(myStack)){
        doubleStack(myStack);
    }
    myStack->array[++(myStack->top)] = data;
}

// checking if the stack is empty
int isEmpty(Stack *myStack){
    return (myStack->top==-1);
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
    return myStack->array[myStack->top--];
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
    int fullStatus, emptyStatus, topElement, poppedElement;

    // creating stack
    Stack *myStack = createStack();

    // checking if it's full
    fullStatus = isFull(myStack);
    printf("Full status : %d\n", fullStatus);

    // checking if it's empty
    emptyStatus = isEmpty(myStack);
    printf("Empty status : %d\n", emptyStatus);

    push(myStack, 10);
    // checking if it's full
    fullStatus = isFull(myStack);
    printf("Full status : %d\n", fullStatus);

    push(myStack, 20);
    push(myStack, 30);

    // checking if it's full
    fullStatus = isFull(myStack);
    printf("Full status : %d\n", fullStatus);

    // popping
    poppedElement = pop(myStack);
    printf("Popped element is %d\n", poppedElement);

    // getting top
    topElement = top(myStack);
    printf("Top element is %d\n", topElement);

    // checking if it's empty
    emptyStatus = isEmpty(myStack);
    printf("Empty status : %d\n", emptyStatus);

    push(myStack, 100);
    push(myStack, 110);
    push(myStack, 120);
    push(myStack, 130);

    // traversing
    traverse(myStack);

    // deleting stack
    deleteStack(myStack);
    myStack =NULL; // it's a good practice

    // again traversing
    traverse(myStack);

    return 0;
}
// Author : Arunabha Mandal
// Date : 22.09.2022
// Stack implementation using linked list

#include <stdio.h>
#include <stdlib.h>

// prototype of the stack
typedef struct Stack{
    int data;
    struct Stack *next;
}Stack;

// creating stack
Stack *create(){
    return NULL;
}

// pushing
void push(Stack **top, int data){
    Stack *temp = (Stack*)malloc(sizeof(Stack));
    if(!temp){
        return;
    }
    temp->data = data;
    temp->next = *top;
    *top = temp;
}

// checking whether the stack is empty
int isEmpty(Stack *top){
    return (top==NULL);
}

// popping
int pop(Stack **top){
    int data;
    Stack *temp;
    if(isEmpty(*top)){
        return INT_MIN;
    }
    temp=*top;
    *top=(*top)->next;
    data = temp->data;
    free(temp);
    return data;
}

// getting the top element
int top(Stack *top){
    if(isEmpty(top)){
        return INT_MIN;
    }
    return (top->data);
}

// deleting
void deleteStack(Stack **top){
    Stack *temp, *p;
    p=*top; // reserving the top and deleting it later after all the nodes are deleted
    while(p->next){
        temp=p->next;
        p->next = temp->next;
        free(temp);   
    }
    free(p);
}

// traverse
void traverse(Stack *top){
    // printing in reverse order
    Stack *temp=top;
    printf("Elements are : ");
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

// main function
int main(){
    Stack *mystackTop = create();

    // checking whether it's empty 
    int empty=isEmpty(mystackTop);
    printf("Empty status : %d\n", empty); // 1

    // pushing elements
    push(&mystackTop, 10);
    push(&mystackTop, 20);
    push(&mystackTop, 30);
    push(&mystackTop, 40);
    push(&mystackTop, 50);

    // checking whether it's empty 
    empty=isEmpty(mystackTop);
    printf("Empty status : %d\n", empty); // 0

    // getting the top element
    int topElement=top(mystackTop);
    printf("Top element = %d\n", topElement);

    // traversing the linked list from top to bottom
    traverse(mystackTop);

    // deleting an element
    int poppedElement=pop(&mystackTop);
    printf("Popped element %d\n", poppedElement);

    // traversing the stack
    traverse(mystackTop);

    // deleting stack and checking the top
    deleteStack(&mystackTop);
    // during debug it will return a garbage value but ....
    // if we run it, it is returning the last element .....actually it consists a garbage value
    printf("Top element = %d\n", mystackTop->data);


    return 0;
}
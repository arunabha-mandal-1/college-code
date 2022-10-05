// Author : Arunabha Mandal
// Date : 05.10.2022
// Queue using linked list

#include <stdio.h>
#include <stdlib.h>

// prototype of linked list node
typedef struct ListNode{
    int data;
    struct ListNode *next;
}Node;

// prototype of queue
typedef struct Queue{
    Node *front;
    Node *rear;
}Queue;

// create
Queue *create(){
    Queue *myQueue=(Queue*)malloc(sizeof(Queue));
    myQueue->front=myQueue->rear=NULL;
    return myQueue;
}

// checking whether it's empty
int isEmpty(Queue *myQueue){
    return (myQueue->front==NULL);
}

// enqueue
void enQueue(Queue **myQueue, int element){
    Node *newNode=(Node*)malloc(sizeof(Node));
    if(!newNode){
        return;
    }
    newNode->data=element;
    newNode->next=NULL;
    if((*myQueue)->rear){
        ((*myQueue)->rear)->next=newNode;
    }
    (*myQueue)->rear=newNode;
    if((*myQueue)->front==NULL){
        (*myQueue)->front=(*myQueue)->rear;
    }
}

// dequeue
int deQueue(Queue **myQueue){
    int data=INT_MIN;
    Node *temp=NULL;
    if(isEmpty(*myQueue)){
        printf("Queue is empty.\n");
        return data;
    }else{
        temp=(*myQueue)->front;
        data=((*myQueue)->front)->data;
        (*myQueue)->front=((*myQueue)->front)->next;
        free(temp);
    }
    return data;
}

// delete
void delete(Queue **myQueue){
    Node *temp, *myFront;
    myFront=(*myQueue)->front;
    while(myFront->next){
        temp=myFront->next;
        myFront->next=temp->next;
        free(temp);
        temp=NULL;
    }
    free(myFront);
    myFront=NULL;
    free(*myQueue);
    *myQueue=NULL;
}

// traverse
void traverse(Queue *myQueue){
    if(!myQueue){
        printf("Empty queue.\n");
        return;
    }
    Node *temp=myQueue->front;
    printf("Elements are : ");
    for(temp; temp!=NULL; temp=temp->next){
        printf("%d ", temp->data);
    }
    printf("\n");
}

// main function
int main(){
    Queue *myQueue=create();

    // enqueueing
    enQueue(&myQueue, 10);
    enQueue(&myQueue, 20);
    enQueue(&myQueue, 30);
    enQueue(&myQueue, 40);
    enQueue(&myQueue, 50);

    // dequeueing
    // int ele1=deQueue(&myQueue);
    // int ele2=deQueue(&myQueue);
    // printf("Element-1 : %d\n", ele1);
    // printf("Element-2 : %d\n", ele2);

    // rear and front element
    printf("Rear element : %d\n", myQueue->rear->data);
    printf("Front element : %d\n", myQueue->front->data);

    // printing all the elements
    traverse(myQueue);

    // checking whether it's empty
    int emptyStatus=isEmpty(myQueue);
    printf("Empty status : %d\n", emptyStatus);

    // deleting queue
    Queue **temp=&myQueue;
    delete(temp);

    traverse(myQueue);
    return 0;
}
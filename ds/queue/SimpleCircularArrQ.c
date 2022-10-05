// Author : Arunabha Mandal
// Date : 04.10.2022
// Queue using simple circular array

#include <stdio.h>
#include <stdlib.h>

// prototype for queue
typedef struct ArrayQueue{
    int front, rear;
    int capacity;
    int *array;
}Queue;

// create
Queue *create(int size){
    Queue *myQueue=(Queue*)malloc(sizeof(Queue));
    if(!myQueue){
        return NULL;
    }
    myQueue->capacity=size;
    myQueue->rear=myQueue->front=-1;
    myQueue->array=(int*)malloc((myQueue->capacity)*sizeof(int));
    if(!myQueue->array){
        return NULL;
    }
    return myQueue;
}

// checking if it's empty
int isEmpty(Queue *myQueue){
    return (myQueue->front==-1);
}

// checking if it's full
int isFull(Queue *myQueue){
    return (((myQueue->rear+1)%myQueue->capacity)==myQueue->front);
}

// size of queue
int sizeOfQueue(Queue *myQueue){
    if(myQueue->rear==myQueue->front){
        if(myQueue->front==-1){
            return 0;
        }else{
            return 1;
        }
    }else if(myQueue->rear>myQueue->front){
        return (myQueue->rear-myQueue->front+1);
    }
    return (myQueue->capacity-myQueue->front)+(myQueue->rear+1);
}

// enqueue
void enQueue(Queue *myQueue, int data){
    if(isFull(myQueue)){
        printf("Queue overflow.\n");
    }else{
        myQueue->rear=(myQueue->rear+1)%myQueue->capacity;
        myQueue->array[myQueue->rear]=data;
        if(myQueue->front==-1){
            myQueue->front=myQueue->rear;
        }
    }
}

// dequeue
int deQueue(Queue *myQueue){
    int data=INT_MIN;
    if(isEmpty(myQueue)){
        printf("Queue underflow.\n");
        return data;
    }else{
        data=myQueue->array[myQueue->front];
        if(myQueue->rear==myQueue->front){
            myQueue->rear=myQueue->front=-1;
        }else{
            myQueue->front=(myQueue->front+1)%myQueue->capacity;
        }
    }
    return data;
}

// delete queue
void  delete(Queue *myQueue){
    if(myQueue){
        if(myQueue->array){
            free(myQueue->array);
        }
        free(myQueue);
    }
}

// main function
int main(){
    Queue *myQueue=create(5);
    enQueue(myQueue, 10);
    enQueue(myQueue, 20);
    enQueue(myQueue, 30);
    enQueue(myQueue, 40);
    enQueue(myQueue, 50);

    int ele1=deQueue(myQueue);
    int ele2=deQueue(myQueue);

    enQueue(myQueue, 60);
    enQueue(myQueue, 70);
    enQueue(myQueue, 80);

    int sizeOfQ=sizeOfQueue(myQueue);
    printf("Size of queue is %d\n", sizeOfQ);
    return 0;
}
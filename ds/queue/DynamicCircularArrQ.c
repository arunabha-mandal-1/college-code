// Author : Arunabha Mandal
// Date : 04.10.2022
// Queue using Dynamic circular array

#include <stdio.h>
#include <stdlib.h>

// prototype of queue
typedef struct DynArrayQueue{
    int front,rear;
    int capacity;
    int *array;
}Queue;

// create
Queue *createQueue(){
    Queue *myQueue=(Queue*)malloc(sizeof(Queue));
    if(!myQueue){
        return NULL;
    }
    myQueue->capacity=1;
    myQueue->front=myQueue->rear=-1;
    myQueue->array=(int*)malloc(myQueue->capacity*sizeof(int));
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

// resize queue
void resizeQueue(Queue *myQueue){
    int size=myQueue->capacity;
    myQueue->capacity=myQueue->capacity*2;
    myQueue->array=(int*)realloc(myQueue->array, (myQueue->capacity)*sizeof(int));
    if(!myQueue->array){
        printf("Memory error.\n");
        return;
    }
    if(myQueue->front > myQueue->rear){
        for(int i=0; i<myQueue->front; i++){
            myQueue->array[i+size]=myQueue->array[i];
        }
        myQueue->rear=myQueue->rear+size;
    }
}

// enqueue
void enQueue(Queue *myQueue, int data){
    if(isFull(myQueue)){
        resizeQueue(myQueue);
    }
    myQueue->rear=(myQueue->rear+1)%myQueue->capacity;
    myQueue->array[myQueue->rear]=data;
    if(myQueue->front==-1){
        myQueue->front=myQueue->rear;
    }
}

// dequeue
int deQueue(Queue *myQueue){
    int data=INT_MIN;
    if(isEmpty(myQueue)){
        return data;
    }else{
        data=myQueue->array[myQueue->front];
        if(myQueue->front==myQueue->rear){
            myQueue->front=myQueue->rear=-1;
        }else{
            myQueue->front=(myQueue->front+1)%myQueue->capacity;
        }
    }
    return data;
}

// delete queue
void delete(Queue *myQueue){
    if(myQueue){
        if(myQueue->array){
            free(myQueue->array);
        }
        free(myQueue);
    }
}

// main function
int main(){
    Queue *myQueue=createQueue();
    enQueue(myQueue, 10);
    enQueue(myQueue, 20);
    enQueue(myQueue, 30);
    enQueue(myQueue, 40);
    enQueue(myQueue, 50);
    enQueue(myQueue, 60);
    enQueue(myQueue, 70); // here we cry

    int ele1=deQueue(myQueue);
    // int ele2=deQueue(myQueue);
    // int ele3=deQueue(myQueue);

    printf("%d\n", ele1);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// creating prototype of structure
typedef struct intnode{
    int element;
    struct intnode *next;
} intnode;

// creating linked list
intnode *create(int n){
    intnode *p, *q, *r;
    if(n==0){
        p=NULL; // making it NULL if user don't want to add any elements
        return p;
    }
    int i=0;
    p=(intnode*)malloc(sizeof(intnode)); // allocating space for p
    printf("Enter elements seperated by space : "); // taking inputs
    scanf("%d", &(p->element));
    p->next=NULL;
    q=p;// to make sure p is intact
    for(i; i<n-1; i++){
        r=(intnode*)malloc(sizeof(intnode)); // each time creating a new intnode
        scanf("%d", &(r->element));
        r->next=NULL;
        q->next=r; // linking with the previous element
        q=r; // shifting q from prevoius element to the current element
    }
    return p;
}

// traversing linked list
void traverse(intnode *p){
    if(p==NULL){
        printf("No elements in the list.");
        return;
    }
    intnode *t;
    t=p;
    printf("Printing elements : ");
    while(t != NULL){ // traverse untill t is NULL
        printf("%d ", t->element);
        t=t->next; // shifting to the next element
    }
}

// main program
int main(){
    int n=5;
    printf("Number of elements you want to add : ");
    scanf("%d", &n);
    intnode *node; // // starting address
    // safe check
    if(node==NULL){
        return -1;
    }
    node = create(n); //  create a linked list
    traverse(node); // traverse linked list
    return 0;
}
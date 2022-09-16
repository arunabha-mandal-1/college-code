// author : Arunabha Mandal
// date : 15.09.2022
// linked list creation, insertion, deletion, traversal, reverse > all tested
#include <stdio.h>
#include <stdlib.h>

// prototype of the node
typedef struct Node{
    int data;
    struct Node *next;
}Node;

// creating a linked list
Node *create(int n){
    Node *p, *q, *r;

    if(n==0){
        p=NULL;
        return p;
    }

    // creating the head
    p = (Node*)malloc(sizeof(Node));
    printf("Enter %d elements : ", n);
    scanf("%d", &(p->data));
    p->next = NULL;
    
    // the pointer that is moving
    q = (Node*)malloc(sizeof(Node));
    q=p;
    // taking other inputs
    for(int i=1; i<n; i++){

        // making an another node
        r = (Node*)malloc(sizeof(Node));
        scanf("%d", &(r->data));
        r->next = NULL;

        // linking the new node with q
        q->next = r;
        q=r; // moving q to r
    }
    return p;
}

// traversing
void traverse(Node *p){
    if(p==NULL){
        printf("No elements.\n");
        return;
    }
    Node *temp = p;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    return;
}

// inserting
void insert(Node **p, int element, int position){

    Node *q;
    // new node
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = element;
    temp->next = NULL;

    // at the beginning of the node
    if(position==0){
        temp->next = (*p);
        (*p) = temp;
        return;
    }

    // other positions
    q=(*p);
    for(int i=1; (i<position)&&(q!=NULL); i++){
        q=q->next;
    }
    if(q==NULL){
        return;
    }

    // now linking temp with q
    temp->next = q->next;
    q->next = temp;
    return;
}

// deletion
void delete(Node **p, int position){
    Node *q, *x;
    q=*p;
    if(position==0){
        *p=(*p)->next;
        free(q);
        return;
    }
    x=q->next;
    for(int i=1; (i<position)&&(x!=NULL); i++){
        q=x;
        x=x->next;
    }
    if(x==NULL){
        return;
    }
    q->next = x->next;
    x->next = NULL;
    free(x);
    return;
}

// reversal
void reverse(Node **p){
    Node *prev = NULL;
    Node *current = *p;
    Node *next = NULL;

    while(current != NULL){
        // Store next
        next = current->next;
        // Reverse current node's pointer
        current->next = prev;
        // Move pointers one position ahead
        prev = current;
        current = next;
    }
    *p=prev;
}
// main function
int main(){

    Node *ptr;
    ptr = create(5);
    traverse(ptr);
    // insert(&ptr, 55, 5);
    // traverse(ptr);
    // insert(&ptr, 50, 0);
    // traverse(ptr);
    // insert(&ptr, 45, 12);
    // traverse(ptr);
    delete(&ptr, 2);
    traverse(ptr);

    // reverse(&ptr);
    // traverse(ptr); 


    return 0;
}
// author : Arunabha Mandal
// date : 16.09.2022
// double linked list operations - creation, insertion, deletion, traversal
#include <stdio.h>
#include <stdlib.h>

// creating prototype of node
typedef struct Node{
    int data;
    struct Node *left, *right;
}Node;

// creating linked list
Node *create(int n){
    Node *head, *tracker, *newNode;
    // head = starting point
    // tracker = pointer that is moving
    // newNode = pointer of new nodes
    head = (Node*)malloc(sizeof(Node));
    printf("Enter %d elements : ", n);
    scanf("%d", &(head->data));
    head->left = NULL;
    head->right = NULL;

    // assigning head to tracker
    tracker = head;

    for(int i=1; i<n; i++){
        newNode = (Node*)malloc(sizeof(Node));
        scanf("%d", &(newNode->data));
        newNode->left = tracker;
        newNode->right = NULL;
        tracker->right = newNode;
        tracker = newNode;
    }
    return head;
    // in order to to return the address of last node return tracker
    // return tracker; // no need to reverse, just to this and do small change in traversal
    // .....
}

// inserting a node in double linked list
void insert(Node **head, int element, int index){ // 0 based index
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = element;
    newNode->left = NULL;
    newNode->right = NULL;

    if(index==0){
        newNode->right = *head;
        (*head)->left = newNode;
        *head = newNode;
        return;
    }
    //tracker
    Node *tracker = *head;
    int i;
    for(i=1; (i<index)&&(tracker!=NULL); i++){
        tracker=tracker->right;
        // tracker stops 1 node before where we want to add new node
    }
    if(index>i){
        printf("Limit exceeded.\n");
    }
    if(tracker==NULL){
        return;
    }
    newNode->right = tracker->right;
    newNode->left = tracker;
    if(tracker->right != NULL){
        (tracker->right)->left = newNode;
    }
    tracker->right = newNode;
    return;
}

// deleting a node from double linked list
void delete(Node **head, int position){
    Node *tracker = *head;
    if(position==0){
        (*head)=tracker->right;
        (*head)->left = NULL;
        free(tracker);
        return;
    }
    tracker=*head;
    for(int i=0; (i<position)&&(tracker!=NULL); i++){
        tracker=tracker->right;
    }
    if(tracker==NULL){
        return;
    }
    (tracker->left)->right = tracker->right;
    if(tracker->right!=NULL){
        (tracker->right)->left = (tracker->left);
    }
    return;
}
// traversing linked list
void traverse(Node *head){
    Node *temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->right;
        // ....
        // temp = temp->left; // when we print in opposite order
    }
    printf("\n");
    return;
}
// main function
int main(){
    Node *head = create(5);
    traverse(head);
    // insert(&head, 10, 4);
    delete(&head, 3);
    traverse(head);

    return 0;
}
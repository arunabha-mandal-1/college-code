// Author : Arunabha Mandal
// Date : 30.09.2022
// All about doubly circular Linked List
#include <stdio.h>
#include <stdlib.h>

// prototype for linked list nodes
typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right;
}Node;

// create
Node *create(int n){
    Node *head=NULL;
    Node *tracker=NULL;
    Node *newNode;

    if(n==0){
        return head;
    }
    head=(Node*)malloc(sizeof(Node));
    printf("Enter %d elements : ", n);
    scanf("%d", &(head->data));
    head->left=NULL;
    head->right=NULL;

    tracker=head;
    for(int i=1; i<n; i++){
        newNode=(Node*)malloc(sizeof(Node));
        scanf("%d", &(newNode->data));
        newNode->right=NULL;
        newNode->left=tracker;
        tracker->right=newNode;
        tracker=newNode;
    }
    tracker->right=head;
    head->left=tracker;
    return head;
}

// no of elements
int numberOfElements(Node *head){
    if(!head){
        return 0;
    }
    int count=0;
    Node *tracker = head;
    do{
        count++;
        tracker=tracker->right;
    }while(tracker!=head);
    return count;
}

// insertion
void insert(Node **head, int myData, int position){
    Node *tarcker=*head;
    Node *newNode=(Node*)malloc(sizeof(Node));
    newNode->data=myData;
    newNode->left=NULL;
    newNode->right=NULL;

    int num=numberOfElements(*head);
    // if there is no elements
    if(num==0 && position==0){
        newNode->right=newNode;
        newNode->left=newNode;
        *head=newNode;
        return;
    }

    // at the beginning
    if(num!=0 && position==0){
        newNode->right=(*head);
        (tarcker->left)->right=newNode;
        newNode->left=(tarcker->left);
        tarcker->left=newNode;
        (*head)=newNode;
        return;
    }

    // at the end
    if(position==num){
        ((*head)->left)->right=newNode;
        newNode->right=*head;
        newNode->left=(*head)->left;
        (*head)->left=newNode;
        return;
    }
    // anywhere
    tarcker=tarcker;
    for(int i=1; (i<position)&&(tarcker->right!=*head); i++){
        tarcker=tarcker->right;
    }
    if(tarcker->right==*head){
        printf("Out of bound.\n");
        return;
    }
    newNode->right=tarcker->right;
    (tarcker->right)->left=newNode;
    tarcker->right=newNode;
    newNode->left=tarcker;
    return;
}

// delete
void delete(Node **head, int position){
    Node *tracker=*head;
    int num=numberOfElements(tracker);
    if(*head==NULL){
        return;
    }
    // in case there is only one element
    if(num==0 && position==0){
        free(*head);
        *head=NULL;
        return;
    }
    if(num!=0 && position==0){
        ((*head)->left)->right=(*head)->right;
        ((*head)->right)->left=(*head)->left;
        (*head)=(*head)->right;
        free(tracker);
        tracker=NULL;
        return;
    }
    tracker=tracker->right;
    for(int i=1; (i<position)&&(tracker!=*head); i++){
        tracker=tracker->right;
    }
    if(tracker==*head){
        printf("Out of bound.\n");
        return;
    }
    (tracker->left)->right=tracker->right;
    (tracker->right)->left=tracker->left;
    free(tracker);
    tracker=NULL;
    return;
}
// traverse
void traverse(Node *head){
    Node *temp=head;
    if(!temp){
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Elements are : ");
    do{
        printf("%d ", temp->data);
        temp=temp->right;
    }while(temp!=head);
    printf("\n");
}
// main function
int main(){
    Node *start=create(5);
    int num=numberOfElements(start);
    printf("Total %d elements.\n", num);
    traverse(start);

    insert(&start, 100, 5);
    insert(&start, 101, 6);
    num=numberOfElements(start);
    printf("Total %d elements.\n", num);
    traverse(start);

    // delete(&start, 5);
    // traverse(start);
    return 0;
}
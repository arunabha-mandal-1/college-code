// author : Arunabha Mandal
// Date : 16.09.2022
// creation, insertion, deletion, traversal, no of elements of circular liked list(consider 0 based indexing)

#include <stdio.h>
#include <stdlib.h>

// creating prototype of node
typedef struct Node{
    int data;
    struct Node *next;
}Node;

// creating circular linked list
Node *create(int n){
    Node *head, *tracker, *newNode;
    head = (Node*)malloc(sizeof(Node));
    if(n==0){
        // am not adding any elements
        head=NULL;
        return head;
    }
    tracker = (Node*)malloc(sizeof(Node));

    printf("Enter %d elements : ", n);
    scanf("%d", &(head->data));
    head->next = NULL;

    tracker = head;
    for(int i=1; i<n; i++){
        newNode = (Node*)malloc(sizeof(Node));
        scanf("%d", &(newNode->data));
        tracker->next = newNode;
        newNode->next = NULL;
        tracker = newNode;
    }
    tracker->next = head; // it plays the important role to make the linked list circular
    return head;
}
// no of elements
int noOfElements(Node *head){
    Node *current;
    current = head;
    int count = 0;
    if(head==NULL){
        return 0;
    }
    do{
        count++;
        current = current->next;
    }while(current != head);
    return count;
}

// insertion
void insert(Node **head, int element, int position){
    int num = noOfElements(*head);
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(!newNode){printf("Memory allocation failed.\n");}
    newNode->data = element;
    newNode->next = NULL;
    
    // when the list is empty
    if(*head==NULL){
        // here position does not matter
        newNode->next = newNode; // pointing to itself
        *head = newNode;
        return;
    }
    // adding element at the beginning of the list and the list is not empty
    if((num!=0)&&(position==0)){
        newNode->next = *head;
        Node *current = *head;
        while(current->next != *head){
            current=current->next;
        }
        current->next=newNode;
        *head = newNode;
        return;
    }
    // adding element at the end of the list and the list is not empty
    if((num!=0) && (position==num)){
        Node *current = *head;
        while(current->next != *head){
            current=current->next;
        }
        newNode->next = *head;
        current->next = newNode;
        return;
    }

    // inserting in between
    Node *current = (*head)->next;
    for(int i=1; (i<position-1)&&(current!=*head); i++){
        current=current->next;
    }
    if(current==*head){
        return;
    }
    newNode->next = current->next;
    current->next = newNode;
    return;
}

// deletion
void delete(Node **head, int position){
    if(*head==NULL){
        return;
    }
    int num = noOfElements(*head);
    
    // in case there is only one element
    if(num==1){
        free(*head);
        return;
    }
    if(position==0){
        Node *current = *head;
        while(current->next != *head){
            current=current->next;
        }
        Node *temp = *head;
        current->next = (*head)->next;
        *head = (*head)->next;
        free(temp);
        return;
    }
    if(position==num-1){
        Node *current = (*head)->next;
        while((current->next)->next != *head){
            current=current->next;
        }
        Node *temp = current->next;
        free(temp);
        current->next = *head;
        return;
    }
    
    Node *current = *head;
    for(int i=1; (i<position)&&(current->next!=*head); i++){
        current=current->next;
    }
    if(current->next==*head){
        return;
    }
    Node *temp = current->next;
    current->next = temp->next;
    temp->next = NULL;
    free(temp);
    return;
}
// traversing circular linked list
void traverse(Node *head){
    Node *current = head;
    if(current == NULL){
        printf("\nMemory is not allocated.\n");
        return;
    }
    printf("Elements are : ");
    do{
        printf("%d ", current->data);
        current = current->next;
    }while(current != head); // cuz it is circular linked list
    printf("\n");
}

int main(){
    // creation
    Node *start = create(5); // creating circular linked list of 5 elements

    // no of elements
    // int num = noOfElements(start);
    // printf("Total %d elements in the linked list.", num);

    // traversal
    traverse(start);

    // insertion
    // insert(&start, 50, 6);
    // traverse(start);

    // deletion
    delete(&start, 0);
    traverse(start);
    return 0;
}
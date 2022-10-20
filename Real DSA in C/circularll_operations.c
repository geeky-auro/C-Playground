#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    // int data kaushik data
    struct node *next;
};
typedef struct node node;
void printData(node *head){
    node *p=head;
    do
    {
        printf("Element is %d \n",p->data);
        p=p->next;
    } while (p!=head);   

}
node* insertAtFirst(node *head, int data){
    node * ptr = (node*) malloc(sizeof(node));
    ptr->data = data;
 
    node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
int main(){
    node *first,*second,*third,*fourth,*head;
    
    first=(node *)malloc(sizeof(node));
    second=(node *)malloc(sizeof(node));
    third=(node *)malloc(sizeof(node));
    fourth=(node *)malloc(sizeof(node));

    head=first;
    first->data=40;
    first->next=second;

    second->data=41;
    second->next=third;
    
    third->data=43;
    third->next=fourth;
    
    fourth->data=45;
    fourth->next=head;
    printf("Before Insertion of Data \n");
    printData(head);
    head=insertAtFirst(head,59);
    node *l=NULL;
    l=insertAtFirst(l,4);
    printf("After Insertion of Data \n");
    printData(head);
    return 0;
}
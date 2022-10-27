#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;

void printData(node *head){
    node *p=head;
    do
    {
        printf("Element is %d \n",p->data);
        p=p->next;
    } while (p!=NULL);   

}
void showRec(node *head){
    if (head==NULL)
    {
        return;
    }
    showRec(head->next);
    printf("%d ",head->data);
    showRec(head->next);
}
int main(){
    node *first,*second,*third,*fourth,*head,*fifth;
    first=(node *)malloc(sizeof(node));
    second=(node *)malloc(sizeof(node));
    third=(node *)malloc(sizeof(node));
    fourth=(node *)malloc(sizeof(node));
    fifth=(node *) malloc(sizeof(node));

    head=first;
    first->data=10;
    first->next=second;

    second->data=20;
    second->next=third;
    
    third->data=30;
    third->next=fourth;
    
    fourth->data=40;
    fourth->next=fifth;

    fifth->data=50;
    fifth->next=NULL;
    showRec(head);    
    return 0;
}

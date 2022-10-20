#include<stdio.h>
#include<stdlib.h>
void createList();
struct node
{
    int data;
    struct node* next;
};
typedef struct node node;
node *head=NULL;
int listLength(node *head){
    if (head==NULL)
    {
        return 0;
    }
    else{
        int count =1;
        node*p=head;
        while (p->next!=head)
        {
            p=p->next;
            count++;
        }
        return count;
        
    }
}

void insertAtBeginning(node *head){
    node *p;
    p=(node *)malloc(sizeof(node));
    int l=listLength(head);
    if (p==NULL)
    {
       exit(1);
    }
    printf("Enter Data in new node");
    scanf("%d",&p->data);
    p->next=NULL;
    if (head==NULL)
    {
        head=p;
        head->next=head;
        return;
    }
    else{
        node *q=head;
        while (q->next!=head)
        {
            q=q->next;
        }
        q->next=p;
        p->next=head;
        head=p;
        p=NULL;
        q=NULL;
    }
}

void deleteLastNode(node * head){
    int l=listLength(head);
    if (head==NULL)
    {
        exit(1);
    }
    if (l==1)
    {
        free(head);
        head=NULL;
        return;
    }
    else{
        node *p=head,*q=NULL;
        while (p->next!=head)
        {
            q=p;
            p=p->next;
        }
        q->next=head;
        free(p);
        p=NULL;
        q=NULL;
        
    }

}
int main(){
printf("Welcome to Linked List Chapter-1\n");
printf("Enter no. of Nodes to be created \n ");
int n;
scanf("%d",&n);

for (int i = 0; i < n; i++)
{
    createList();
}

return 0;
}

void createList(){
    node *temp=NULL;
    temp=(node*) malloc(sizeof(node));
    if (temp==NULL)
    {
        printf("Memory Full..!");
        exit(1);
    }
    printf("Enter Data ELement \n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if (head==NULL)
    {
        head=temp;
    }else{
        node *p=head;
        while (p->next!=head)
        {
            p=p->next;
        }
        p->next=head;
        p=NULL;
        temp=NULL;       
    }

}


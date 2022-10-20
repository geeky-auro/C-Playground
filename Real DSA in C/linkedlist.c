// Linked List Creation in C..!
#include<stdio.h>
#include<stdlib.h>
void createList();
void printELement();
struct node
{
    int data;
    struct node* next;
};
typedef struct node node;
node *head=NULL;
void printData(){
        
    if (head==NULL)
    {
       printf("No ELement Present \n");
       exit(1);
    }
    else{
        node *p=head;
        while (p->next!=NULL)
        {
            printf("%d \n",p->data);
            p=p->next;
        }
        if (p->next==NULL)
        {
            printf("%d \n",p->data);
        }
        
    }

}

void insertDataAtBeginning(){
    printf("Data to be Inserted");
    node *temp;
    temp=(node *) malloc(sizeof(node));
    printf("Enter Data Element \n");
    scanf("%d",&temp->data);
    if (head==NULL)
    {
        printf("No ELements Present \n");
        head=temp;
    }
    else{
        node *ptr=NULL;
        ptr=head->next;
        head=ptr;
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
insertDataAtBeginning();
printData();

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
        while (p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        p=NULL;
        temp=NULL;       
    }

}

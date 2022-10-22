// This Code Consists of a lot of errors kindly handle it carefully
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int power;
    struct node *next;
};
typedef struct node node;
node * loutputHead=NULL;
void createList(int data,int power){
    node *temp=NULL;
    temp=(node*) malloc(sizeof(node));
    if (temp==NULL)
    {
        printf("Memory Full..!");
        exit(1);
    }
    printf("Enter Data ELement and Power of the present Polynomial \n");
    temp->data=data;
    temp->power=power;
    temp->next=NULL;
    if (loutputHead==NULL)
    {
        loutputHead=temp;
    }else{
        node *p=loutputHead;
        while (p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        p=NULL;
        temp=NULL;       
    }

}
void printData(node *head){
    if (head==NULL)
    {
        printf("No Nodes Exist \n");
        return;
    }
    
    node *p=head;
    do
    {
        printf("Element is %d Power %d +\n",p->data,p->power);
        p=p->next;
    } while (p!=head);   

}
node * highestPower(node *head1,node *head2){
    node *temp1=head1,*temp2=head2;
    int largestPoly_node1=head1->power;
    do
    {
        if (largestPoly_node1>temp1->power)
        {
            largestPoly_node1=temp1->power;
        }
        temp1=temp1->next;
        
        // if (temp1->power >= temp2->power)
        // {
        //     largestPoly_node=head1;
        // }else{
        //     largestPoly_node=head2;
        // }
        
        // if (temp1!=NULL)
        // {
        //     temp1=temp1->next;
        // }
        // if (temp2!=NULL)
        // {
        //     temp2=temp2->next;
        // }
        
        
    } while (!(temp1));
    int largestPoly_node2=temp2->power;
    do
    {
        if (largestPoly_node2>temp2->power)
        {
            largestPoly_node2=temp2->power;
        }
        temp2=temp2->next;
    } while (!temp2);
    
    if (largestPoly_node1>largestPoly_node2)
    {
        return head1;
    }else{
        return head2;
    }
    
}
node * computePoly(node * head1,node *head2,node *ioutputHead){
    if (head1==NULL && head2==NULL)
    {
        printf("Polynomials DO not Exist");
        // return ioutputHead;
    }
    
    
    if (head1==NULL && head2!=NULL)
    {
        ioutputHead=head2;
        // return ioutputHead;
    }else if (head1!=NULL && head2==NULL)
    {
        ioutputHead=head1;
        // return ioutputHead;
    }

    // find highest power
    node *itemph1=head1,*itemph2=head2;
    node *temp_high=highestPower(itemph1,itemph2);
    node * outputHead=ioutputHead;
    node * temp=NULL;
         if (temp_high==head1)
     {
        itemph1=temp_high;
        do
        {
            
            if (itemph1->power == itemph2->power)
            {   
                // createList(itemph1->data+itemph2->data,itemph1->power);
                  struct node *newNode, *temp;
    int data, i;

    loutputHead = (struct node *)malloc(sizeof(struct node));

    // Terminate if memory not allocated
    if(loutputHead == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }


    // Input data of node from the user
    printf("Enter the data of node 1: ");

    loutputHead->data = itemph1->data+itemph2->data;
    loutputHead->power=itemph1->power; // Link data field with data
    loutputHead->next = NULL; // Link address field to NULL


    // Create n - 1 nodes and add to list
    temp = loutputHead;
    for(i=2; i<=2; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        /* If memory is not allocated for newNode */
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
       

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL 

        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
    }
                
            }else if (itemph1->power > itemph2->power)
            {
                createList(itemph1->data,itemph1->power);
                  struct node *newNode, *temp;
    int data, i;

    loutputHead = (struct node *)malloc(sizeof(struct node));

    // Terminate if memory not allocated
    if(loutputHead == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }


    // Input data of node from the user
    printf("Enter the data of node 1: ");

    loutputHead->data = itemph1->data;
    loutputHead->power=itemph1->power; // Link data field with data
    loutputHead->next = NULL; // Link address field to NULL


    // Create n - 1 nodes and add to list
    temp = loutputHead;
    for(i=2; i<=2; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        /* If memory is not allocated for newNode */
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
       

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL 

        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
                printf("Data2\n");
            }
            }else{
               createList(itemph2->data,itemph2->power);
               printf("Data3\n");
            }
            
            itemph1=itemph1->next;
            itemph2=itemph2->next;
            
        } while (itemph1!=NULL && itemph2!=NULL);
        //  return outputHead;
     }else{
         itemph2=temp_high;
        // return NULL;
     }

    
       
    

    
}

int main(){
    node *first,*second,*third,*fourth,*head;
    
    first=(node *)malloc(sizeof(node));
    second=(node *)malloc(sizeof(node));
    third=(node *)malloc(sizeof(node));
    fourth=(node *)malloc(sizeof(node));

    head=first;
    first->data=40;
    first->power=6;
    first->next=second;

    second->data=41;
    second->power=3;
    second->next=third;
    
    third->data=43;
    third->power=2;
    third->next=fourth;
    
    fourth->data=45;
    fourth->power=1;
    fourth->next=NULL;

       node *ifirst,*isecond,*ithird,*ifourth,*ififth,*ihead;
    
    ifirst=(node *)malloc(sizeof(node));
    isecond=(node *)malloc(sizeof(node));
    ithird=(node *)malloc(sizeof(node));
    ifourth=(node *)malloc(sizeof(node));
    ififth=(node *)malloc(sizeof(node));

    ihead=ifirst;
    ifirst->data=40;
    ifirst->power=5;
    ifirst->next=isecond;

    isecond->data=41;
    isecond->power=3;
    isecond->next=ithird;
    
    ithird->data=43;
    ithird->power=2;
    ithird->next=ifourth;
    
    ifourth->data=45;
    ifourth->power=1;
    ifourth->next=ififth;

    ififth->data=60;
    ififth->power=0;
    ififth->next=NULL;

    // printing out polynomials
    printData(computePoly(head,ihead,NULL));

    //  node *temp_high=highestPower(head,ihead);
    //  if (temp_high==head)
    //  {
    //     printf("Node 1 is the highest Power");
    //  }else{
    //      printf("Node 2 is the highest Power");
        
    //  }
     

    return 0;
}
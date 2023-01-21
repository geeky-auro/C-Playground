#include<iostream>
using namespace std;
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};
class stackLL {
	// Define the data members
    int data;
    Node *head;
    public:
    stackLL() {
        // Implement the Constructor
        head=NULL;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        if(head==NULL){
            return 0;
        }
        Node *t=head;
        int count=0;
        while (t!=NULL)
        {
           count++;
           t=t->next;
        }
        return count;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        if (head==NULL)
        {
            return true;
        }else{
            return false;
        }
    }

    void push(int element) {
        // Implement the push() function
        Node *newNode=new Node(element);
        if (head==NULL)
        {
            head=newNode;
        }else{
            Node *temp=head;
            head=newNode;
            newNode->next=temp;
        }
    }

    int pop() {
        // Implement the pop() function
        if (head==NULL)
        {
            //cout<<"Stack is empty"<<endl;
            return -1;
        }
        Node *temp=head;
        head=head->next;
        return temp->data;
    }

    int top() {
        // Implement the top() function
        if (head==NULL)
        {
            return -1;
        }
        return head->data;
    }
};
int main()
{
    
    return 0;
}
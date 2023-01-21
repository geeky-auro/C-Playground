#include<iostream>
using namespace std;
class Node {
   public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Queue {
	// Define the data members
    Node* head;
    Node *tail;
    int size;
   public:
    Queue() {
		// Implement the Constructor
        head=tail=NULL;
        size=0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		// Implement the getSize() function
        return size;

	}

    bool isEmpty() {
		// Implement the isEmpty() function
        if (size==0)
        {
            return true;
        }else{
            return false;
        }
        
	}

    void enqueue(int data) {
		Node *newNode=new Node(data);
        if (head==NULL)
        {
            /* code */
            head=newNode;
            tail=newNode;
            size=1;
            return;
        }else{
            tail->next=newNode;
            tail=tail->next;
            size++;
        }        
	}

    int dequeue() {
        // Implement the dequeue() function
        if (head==NULL)
        {
            /* code */
            return -1;
        }
        Node *temp=head;
        head=head->next;
        size--;
        return temp->data;
    }

    int front() {
        if (head==NULL)
        {
            return -1;
        }else{
            return head->data;
        }
    }
};


int main()
{
     
    return 0;
}
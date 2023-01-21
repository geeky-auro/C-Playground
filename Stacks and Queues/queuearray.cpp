#include<iostream>
using namespace std;
template<typename T>
class queuearray
{
private:
    /* data */
    T *data;
    int nextIndex;
    int firstIndex;
    int size;    
    int capacity;
public:
        queuearray(int s){
            data=new T[s];
            nextIndex=0;
            firstIndex=-1;
            size=0;
            capacity=s;
        }
        int getSize(){
            return size;
        }
        bool isEmpty(){
            return size==0;
        }
        // insert element
        void enqueue(T element){
            if (size==capacity)
            {
                T *newData=new T[2*capacity];
                int j=0;
                for (int i = firstIndex; i < capacity; i++)
                {
                    newData[j]=data[i];
                    j++;
                }
                for (int i = 0; i < firstIndex; i++)
                {
                    newData[j]=data[i];
                    j++;
                }
                delete []data;
                data=newData;
                firstIndex=0;
                nextIndex=capacity;
                capacity=capacity*2;               
                
                // return;
            }
            
            data[nextIndex]=element;
            nextIndex=(nextIndex+1)  % capacity;
            if (firstIndex==-1)
            {
                /* code */
                firstIndex=0;
            }
            size++;            
        }
        T front(){
            if (isEmpty())
            {
                cout<<"Queue is Empty" <<endl;
                return 0;
            }
            return data[firstIndex];
        }

        T dequeue(){
            if (isEmpty())
            {
                cout<<"Queue is EMpty"<<endl;
                return 0;
            }
            T ans=data[firstIndex];
            firstIndex=(firstIndex+1)%capacity;
            size--;
            if (size==0)
            {
                firstIndex=-1;
                nextIndex=0;
            }
            return ans;
        }
};

int main()
{
    // 10000
    // 01111
    queuearray<int> q(7);
    q.enqueue(7);
    q.enqueue(10);
    q.enqueue(71);
    q.enqueue(80);
    q.enqueue(97);
    q.enqueue(100);
    q.enqueue(80);
    q.enqueue(97);
    q.enqueue(100);
    q.enqueue(80);
    q.enqueue(97);
    q.enqueue(100);
    q.enqueue(80);
    q.enqueue(97);
    q.enqueue(100);

    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;

    return 0;
}
// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/
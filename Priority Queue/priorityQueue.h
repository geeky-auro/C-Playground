// Assuming MinPriority Queue
// TO Complete Binary Tree We need arrays ;)
/**
Tasks:-
isEmpty()
getsize()
getMin()
insert()
*/
class priorityQueue{
vector<int> pq;
public:
priorityQueue(){

}

bool isEmpty(){
    return pq.size()==0;
    // if 0==0 ->True ==>If size of priority Queue is Empty
    // if 1==0 ->False ==> If size of priority Queue is Not Empty
}

int getSize(){
    // Return the size of the Priority Queue - No of elements present 
    return pq.size();
}

int getMin(){
    // Ex 1,2,3,4,5
    // Left child:2i+1
    // Right Child:2i-1

    /*
    Equivalent Tree Representation:-
    1:2,3
    2:4,5
    3:NULL
    4:NULL
    5:NULL
    */
    if(isEmpty()){
        return 0;
        // Priority Queue is Empty
    }
    return pq[0];
}
    void insert(int elements){
        pq.push_back(elements);
        /*
        Child Index to Parent Index: (childIndex-1)/2
        Parent Index to Child Index;-
        Left Child:2i+1
        Right Child:2i+2
        */
        while(childIndex>0)
        int childIndex=pq.size()-1;
        int parentIndex=(childIndex-1)/2;
        if(pq[childIndex]<pq[parentIndex]){
            int temp=pq[childIndex];
            pq[childIndex]=pq[parentIndex];
            pq[parentIndex]=temp;
        }else{
            break;
        }
        childIndex=parentIndex;
        /*
        Now we need to compare this piece of code :-
        parentIndex=(childIndex-1)/2;
        if(pq[childIndex]<pq[parentIndex]){
            int temp=pq[childIndex];
            pq[childIndex]=pq[parentIndex];
            pq[parentIndex]=temp;
        }
        childIndex=parentIndex;
        till two conditions are satisfied
        i) Untill We reach to the root (while loop will take care of this condition)
        ii) Or till We reach our Correct Position (if-else block will take care of this condition)
        */


    }
};
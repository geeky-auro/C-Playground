// Assuming MinPriority Queue
// TO Complete Binary Tree We need arrays ;)
/**
Tasks:-
isEmpty()
getsize()
getMin()


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

};
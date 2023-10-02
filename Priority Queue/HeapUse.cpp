#include<bits/stdc++.h>
using namespace std;
#include "pqueue.h"


void insertIntoHeap(vector<int> &nums,int i){
    if(i==0){
        return;
    }
    int parent=(i-1)/2;
    int childIndex=i; 
    if(nums[i]>nums[parent]){
        childIndex=parent;
        swap(nums[i],nums[parent]);
        insertIntoHeap(nums,childIndex);
    }
}

void downHeapify(vector<int> &pq, int n,int parentIndex){
        int lc=2*parentIndex+1;
        int rc=2*parentIndex+2;
        int minIndex=parentIndex;
        if(lc<n && pq[lc]>pq[minIndex]){
            minIndex=lc;
        }
        if(rc<n and pq[rc]>pq[minIndex]){
            minIndex=rc;
        }
        if(minIndex!=parentIndex){
            swap(pq[parentIndex],pq[minIndex]);
            downHeapify(pq,n,minIndex);
        }
}

// inplace heap sort ;)
void inPlaceHeap(vector<int> &nums, int n) {
    // Step 1 Insert into Heap
    int i = 1;
    while (i < n) { // Use n as the limit, not nums.size()
        insertIntoHeap(nums, i);
        i++;
    }
    // Step 2 Down Heapify each element
    int size = n; // Initialize size to n
    while (size > 1) {
        swap(nums[0], nums[size - 1]);
        size--;
        downHeapify(nums, size,0); // Pass the current size to downHeapify
    }
}



int main(){

    vector<int> vect={15,1,21,0,811};
    inPlaceHeap(vect,5);
    for(int x: vect){
        cout<<x<<" ";
    }
    cout<<endl;
    

    PriorityQueue p;

    p.insert(100);
    p.insert(2180);
    p.insert(390);
    p.insert(120);
    p.insert(250);
    p.insert(750);

    // ELements in heap ;)
    for(auto i:p.getElements()){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<p.getSize()<<endl;
    cout<<p.getMin()<<endl;

    while (!p.isEmpty())
    {
        cout<<p.removeMin()<<" ";
    }
    cout<<endl;
    

}
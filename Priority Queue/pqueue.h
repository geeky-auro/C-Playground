#include<bits/stdc++.h>


class PriorityQueue{
    vector<int> pq;
    public:
    PriorityQueue(){
        pq.clear();
    }

    vector<int> getElements(){
        vector<int> result;
        for (size_t i = 0; i < pq.size(); i++)
        {
            result.push_back(pq[i]);
        }
        return result;
        
    }

    bool isEmpty(){
        return pq.size()==0;
    }

    // Return the size of Priority Queue
    int getSize(){
        return pq.size();
    }
    // To find the minimum element in the priority Queue
    // Element is itself the priority
    int getMin(){
        if(isEmpty()){
            return 0; // Priority queue is empty
        }
        return pq[0];
    }

    void insert(int element){
        // First push the element at the last Index ;)
        pq.push_back(element);
        // Index of last Element
        int childIndex=pq.size()-1;
        while (childIndex>0)
        {
        int parentindex=(childIndex-1)/2;
        if(pq[childIndex]<pq[parentindex]){
            swap(pq[childIndex],pq[parentindex]);
        }else{
            break;
        }
        childIndex=parentindex;
        }
    }

    int removeMin(){
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        int parentIndex=0;
        int lc=2*parentIndex+1;
        int rc=2*parentIndex+2;
        while (lc<pq.size())
        {
            
            int minIndex=parentIndex;
            if(rc<pq.size() and pq[minIndex]>pq[rc])
            {
                minIndex=rc;
            }if(lc<pq.size() and pq[minIndex]>pq[lc]){
                minIndex=lc;
            }
            if(minIndex==parentIndex){
                break;
            }
            swap(pq[parentIndex],pq[minIndex]);
            parentIndex=minIndex;
            lc=2*parentIndex+1;
            rc=2*parentIndex+2;
        }
        return ans;
        
    }

};
#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(20);
    pq.push(1);
    pq.push(167);
    pq.push(7);
    pq.push(45);
    // Remember priority queue foolows max Heap ;)
    cout<<"Size:"<<pq.size()<<endl;
    cout<<"Top:"<<pq.top()<<endl;
    while (!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
    
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    //Lies in the utility Library
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int ,pair<int ,int >> p1={1,{2,3}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<" "<<endl;
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].first<<arr[2].second<<endl;

}

// void explainVector(){
//     vector<int>v;
//     v.push_back(1);
//     v.emplace_back(2);
//     v.emplace_back(3);
//     v.emplace_back(4);
//     v.emplace_back(5);
    
//     // Generally emplace_back is faster than push_back ;)


//     vector<pair<int,int>> vect;
//     vect.push_back({1,2});
//     vect.emplace_back(1,2);
//     //emplace_back doesnt explicitly requires bracket as described in the syntax

//     vector<int> v(5,100);
//     // This by-default defines a container holding 5 values of 100
//     // {100.100,100.100,100}


//     vector<int> vlom(5);
//     // If 5 100's are not required then use the above syntax ;0

//     vector<int> v1(5,20);
//     // {20.20,20.20,20}
//     vector<int> v2(v1);

//     vector<int>::iterator it=v.begin();
//     //Points to the base address of the vector 
//     // * -> used to extract the value ;)
//     it++;
//     cout<<*(it)<<" ";

//     it=it+2;
//     cout<<*(it)<<endl;

//     vector<int>::iterator it=v.end();
//     //Something to remember is end() will be pointing to memory location after the last element ;)
//     // vector<int>::iterator it1=v.rend();
//     // vector<int>::iterator it2=v.rbegin();

// cout<<v.at(0)<<" "<<v[0];
// cout<<v.back()<<" ";
// for(vector<int>::iterator it=v.begin();it!=v.end();it++){
//     cout<<*(it)<<" ";
// }

// for(auto it=v.begin();it!=v.end();it++){
//     cout<<*(it)<<" ";
// }

// //Deletion of vector ;)
// //{10,20,12,23}
// v.erase(v.begin()+1);
// //10,20,12,23,35
// v.erase(v.begin()+2,v.begin()+4); // // {10,20,35} [start,end} 
// // Note end will not be included ;)
// vector<int> v10(2,100);
// v.insert(v.begin(),300);
// vector<int> copy(2,100);
// v.insert(v.begin(),copy.begin(),copy.end());
// cout<<v.size()<<endl;
// v.pop_back();
// v1.swap(v2);
// v.clear(); // Erases the entire vector ;)
// cout<<v.empty();

// }

// void explainList(){
//     list<int> ls;
//     ls.push_back(2);
//     ls.emplace_back(30);
//     ls.emplace_front(40);
//     ls.push_front(60);
//     ls.pop_back();
//     // Rest functions same as vector ;)
// }

// void explainPriorityQueue(){
//     priority_queue<int> pq;

//     pq.push(5); //{5}
//     pq.push(10); //{10,5}
//     pq.push(20); //{20,10,5}
//     pq.push(1); //{20,10,5,1}

//     //Minimum Heap ;)
//     priority_queue<int,vector<int>,greater<int>> pq;
//     pq.push(5); // {5}
//     pq.push(10); // {5,10}
//     pq.push(2); // {2,5,10}
//     pq.push(20); // {2,5,10,20}
// }

int main()
{
    explainPair();
    // explainVector();
    // Set --> Unique and Sorted ;()
    vector<int> p{10,20,30,40,50,60};
    bool search=binary_search(p.begin(),p.end(),30);
    cout<<search<<" Done"<<endl;
    // Use cases of lowerbound in stl ;)
    // Find the first occourence of a X in a sorted array. If it doesnt exists, print -1;
    // A[]={1,4,4,4,4,9,10,11}
    vector<int> A{1,4,4,4,4,9,10,11};
    int index=lower_bound(A.begin(),A.end(),4)-A.begin();
    if(index!=A.size() and A[index]==9) cout <<index;
    else cout<<-1;
    // Generate all the permutations of a String ;)
    string s="ABCD";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void print(){
    cout<<"Auro"<<endl;
}

int sum(int a,int b){
    return a+b;
}

/**
 *
 C++ STL is divided into 4 parts:-
 Algorithms
 Containers
 Functions
 Iterators
 */

 /**<
 Before Learning Containers We need to learn Pairs
 */

 void explainpairs(){
//It generally lies in the utility library..!
 pair<int ,int> p={1,3};
 //p->{1,3}

 //Accessing Elements of Pairs
 cout<<p.first<<" "<<p.second<<endl;

 //We Can use nested Pairs if we want to store more than 2 data..!
 pair<int, pair<int,int>> pi={1,{2,3}};


 //Accessing the elements of the above pairs..!
 cout<<pi.first<<" "<<pi.second.first<<" "<<pi.second.second<<endl;

 //We can also use Pair-Arrays..!
 pair<int,int> arr[]={{1,2},{2,3},{5,6}};

 cout<< arr[1].second<<endl;
 // Or we can iterate over the pair array

 for(int i=0;i<3;i++){
    cout<<"First Element is "<<arr[i].first<<" "<<"Second Element is "<<arr[i].second<<endl;
 }

 }


int main()
{
   // cout<<sum(5,6);
    explainpairs();
    return 0;
}

#include<vector>
#include<iostream>
using namespace std;

int main()
{
    // Dynamic Array 
    // vector<int> *vp=new vector<int>(); 
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v[1]=1100;
    // Use square brackets only when we need to get the element or wse need to update the value of vector in some iondex;
    // Note dont use vector square brackets when we need to insert something instead use v.push_back(); to insert elements ;)

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v.size()<<endl;
    for (size_t i = 0; i <100; i++)
    {
        cout<<"Capacity:"<<v.capacity()<<endl;
        cout<<"Size:"<<v.size()<<endl;
        v.push_back(i+1);
    }
    
    for(auto x :v){
        cout<<x<<endl;
    }
    cout<<v.size()<<endl;
    return 0;
}

#include<iostream>
using namespace std;
#include<stack>

int main()
{
    stack<int> s;
    s.push(45);
    s.push(50);
    s.push(55);
    s.push(60);
    s.push(65);
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    s.pop();
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    return 0;
}
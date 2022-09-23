#include<iostream>
using namespace std;
inline int max(int a,int b){
    return (a>b)?a:b;
}
inline int sum(int a,int b){return a+b;}
int main(){
    // Use of Inline Function
    int a=max(5,6);
    cout<<a<<endl;
    int b=max(-2,-3);
    cout<<b<<endl;
    // Note : USe Inline Function only when there is 1 or two lines of code...!
    int k=sum(a,b);
    cout<<k<<endl;
    return 0;
}
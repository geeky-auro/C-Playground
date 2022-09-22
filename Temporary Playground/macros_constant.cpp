#include<iostream>
using namespace std;
#define PI 3.14
// Defining Global Variables..!
int a=10;

void incre_a1(int a){
    a++;
    cout<<a<<endl;
}

void incre_a(){
    a++;
    cout<<a<<endl;
}

int main(){
    int r=5;
    incre_a1(a);
    cout<<a<<endl;
    incre_a();
    cout<<a<<endl;
    int area=(PI*r)*r;
    cout<<"Area of the Circle is "<<area<<endl;
    return 0;
}
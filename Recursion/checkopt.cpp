#include<iostream>
using namespace std;
class A{
    static int x;
    public:
    A(){
        x++;
    }
    void show(){
        x++;
        cout<<x<<endl;
    }
};
int A::x=5;
int main(){
    A obj;
    obj.show();
    return 0;
}
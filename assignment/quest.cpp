#include <iostream>
using namespace std;
class Test{
    public:
    int *p;
    double *qo;
    Test(){
        p=new int(1);
    }
    Test(double *q){
        qo=new double(*q);
    }
    void display(){
        cout<<*p<<endl;
    }
    void display1(){
        cout<<*qo<<endl;
    }

};
int main(){
    static double i;
    // Static variables (like global variables) 
    // are initialized as 0 if not initialized explicitly. For example in the below program, value of x is printed as 0, while value of y is something garbage
    Test t1,t2(&i);
    t1.display();
    t2.display1();
    return 0;
}
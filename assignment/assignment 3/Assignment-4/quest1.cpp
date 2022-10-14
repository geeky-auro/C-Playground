#include <iostream>
using namespace std;
// Class Defn
class A1;
class A2;

class A1{
private:
int data_A;

public:
A1(int data_A){
this->data_A=data_A;
}
void GetData(){
cout << "\nData in A: "; cout<<data_A;
}
friend void exchangeData(A1&a, A2 &b);
};
class A2{
private:
int data_B;
public:
A2(int data_B){
    this->data_B=data_B;
}
void GetData(){
cout << "\nData in A: "; cout<<data_B;
}
friend void exchangeData(A1&a, A2 &b);
};
// Defining the friend functions of both classes;
void exchangeData(A1&a, A2 &b){
int temp = a.data_A;
a.data_A = b.data_B;
b.data_B = temp;
}
int main()
{
A1 a(56);
A2 b(61);
cout<<"Before Exchange of Data "<<endl;
a.GetData();
b.GetData();
exchangeData(a,b);
cout<<endl;
cout<<"After Exchange of Data "<<endl;
a.GetData();
b.GetData();
return 0;
}
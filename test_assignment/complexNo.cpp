#include<iostream>
using namespace std;
#define size 10
class Complex{
 int *real,*imaginary;
    public:
       
    void inputComplex(){
        real=new int[size];
        imaginary=new int[size];
        for(int i=0;i<size;i++){
            cout<<"Enter Real Part and Imaginary Part "<<i+1<<endl;
            cin>>real[i]>>imaginary[i];
        }
    }
    void DisplayComplex(){
        cout<<"Displaying 10 Complex Numbers ;)"<<endl;
        for(int i=0;i<size;i++){
            if(imaginary[i]<0){
            cout<<*(real+i)<<*(imaginary+i)<<"i"<<endl;
            }
            else{
                cout<<*(real+i)<<"+"<<*(imaginary+i)<<"i"<<endl;
            }
            
        }
    }
};
int main(){
    Complex c;
    c.inputComplex();
    c.DisplayComplex();
    return 0;
}
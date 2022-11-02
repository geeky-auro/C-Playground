#include<iostream>
using namespace std;

class complex
{
private:
    int imaginary,real;
public:
    void display();
    complex();
    complex(int real,int imaginary);
    ~complex();
};

void complex::display(){
    if (imaginary>=0)
    {
    printf("Complex Number Entered is %d+%di \n",real,imaginary);
    }
    else{
    printf("Complex Number Entered is %d%di \n",real,imaginary);
    }
    
    
}

complex::complex()
{
    imaginary=0;
    real=0;
}

complex::complex(int real,int imaginary)
{
    this->real=real;
    this->imaginary=imaginary;
}
complex::~complex()
{
    cout<<"Dexstructor has been Invoked \n";
}


int main()
{
    complex c1,c2(5,6),c3(8,-6); 
    c1.display();
    c2.display();
    c3.display();  
    return 0;
}
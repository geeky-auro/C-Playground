#include<iostream>
using namespace std;

class c1
{
public:
    // Data in Class 1
    int a=10; 
    void showClass(){
        cout<<"From Class-1"<<endl;
    }
};

class c2
{
public:
// Data in Class 2
int b=20;
void showClass(){
        cout<<"From Class-2"<<endl;
    }
};

class c3
{
public:
    // Data in Class 3
    int c=30;
    void showClass(){
        cout<<"From Class-3"<<endl;
    }
};

class c4:public c3

{
public:
    int e=50;
    void showClass(){
        cout<<"From Class-4"<<endl;
    }
};

class c5:public c3
{
public:
    int f=50;
    void showClass(){
        cout<<"From Class-5"<<endl;
    } 
};

class SingleInherit:public c1
{
public:
    void showData(){
        // Illustration of Single Inheritance 
        cout<<"Data in class A-"<<c1::a<<endl;
        c1::showClass();
    }
};

class MultiLevelInherit:public c4
{
public:
    void showData(){
        c4::showClass();
        cout<<"Data in Class D-"<<c4::e<<endl;
        c3::showClass();
        cout<<"Data in Class C-"<<c3::c<<endl;
    }
};

class MultipleInherit:public c1,public c2,public c3
{
public:
    void showData(){
        // Illustration of Multiple Inheritance
        c1::showClass();
        cout<<"Data in Class A-"<<c1::a<<endl;
        c2::showClass();
        cout<<"Data in Class B-"<<c2::b<<endl;
        c3::showClass();
        cout<<"Data in Class C-"<<c3::c<<endl;
    }
};

class HybridInherit:public c4,public c5
{
    public:
    void showData(){
        c4::showClass();
        cout<<"Data in Class D-"<<c4::e<<endl;
        c5::showClass();
        cout<<"Data in Class E-"<<c5::f<<endl;
    }
};

class HierarchicalInherit{

public:
void showClass(){
    cout<<"I am StandAlone Class \n";
}
};

class A:public HierarchicalInherit
{
public:
void showClassData(){
        HierarchicalInherit::showClass();
    }
};

class B:public HierarchicalInherit
{
public:
    void showClassData(){
        HierarchicalInherit::showClass();
    }
};

class C:public HierarchicalInherit
{
public:
void showClassData(){
        HierarchicalInherit::showClass();
    }
};

int main()
{
    SingleInherit s1;
    MultiLevelInherit m1;
    MultipleInherit m2;
    HybridInherit h1;
    // Illustration of Hierarchical Inheritance
    A a;
    B b;
    C c;
    a.showClassData();
    b.showClassData();
    c.showClassData();
    s1.showData();
    m1.showData();
    m2.showData();
    h1.showData();
    return 0;
}
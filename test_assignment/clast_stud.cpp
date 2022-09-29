#include<iostream>
using namespace std;

class student{
string name;
int roll;
int total;
public:
void getData(){
    cout<<"Enter Name of the Student "<<endl;
    getline(cin>>ws,name);
    cout<<"Enter Roll No."<<endl;
    cin>>roll;
    cout<<"Enter Total Marks "<<endl;
    cin>>total;

}
void dispData(){
    cout<<"Name of the Student:"<<name <<endl;
    cout<<"Roll No."<<roll<<endl;
    cout<<"Total Marks Secured :"<<total<<endl;
}
};

int main(){
    student s;
    s.getData();
    s.dispData();
    return 0;
}
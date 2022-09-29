#include<iostream>
using namespace std;

class student{
string name;
int roll;
int total;

public:
int *marks,percent;
void getData(){
   
    cout<<"Enter Name of the Student "<<endl;
    getline(cin>>ws,name);
    cout<<"Enter Roll No."<<endl;
    cin>>roll;
    marks=new int[5];
    cout<<"Enter Marks of the Student "<<endl;
    for(int i=0;i<5;i++){
        cin>>marks[i];
    }

}

void calculate(){
    total=0;
    for(int i=0;i<5;i++){
        total=total+marks[i];
    }
    percent=(total/500.0)*100.0;
}

void dispData(){
    cout<<"Name of the Student:"<<name <<endl;
    cout<<"Roll No."<<roll<<endl;
    cout<<"Total Marks Secured :"<<total<<endl;
    cout<<"Percentage Secured :"<<percent<<endl;
}
};

int main(){
    student s;
    s.getData();
    s.calculate();
    s.dispData();
    return 0;
}
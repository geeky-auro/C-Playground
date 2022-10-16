#include<iostream>
using namespace std;

class student
{
private:
    int roll,total;
    string name;
public:
    void input();
    void output();
    friend void Average(student *s,int size);
};

void student::input(){
    cout<<"Enter Student Name"<<endl;
    getline(cin>>ws,name);
    cout<<"Enter Roll No."<<endl;
    cin>>roll;
    cout<<"Enter Total Marks"<<endl;
    cin>>total;

}

void Average(student s[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+s[i].total;
    }
    double avg=sum/size;
    cout<<"Average Marks Scored by "<<size<<" Students is "<<avg<<endl;
    
}

void student::output(){
    cout<<"Student Name:"<<name<<endl;
    cout<<"Student Roll:"<<roll<<endl;
    cout<<"Total Marks:"<<total<<endl;
    
}

int main(){
    int n;
    cout<<"Enter Number of Students "<<endl;
    cin>>n;
    student *s=new student[n];
    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }
    
    Average(s,n);
    return 0;
}




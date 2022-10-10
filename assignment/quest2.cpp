#include<iostream>
using namespace std;
class student{
    int roll;
    string name;

    public:
    student();
    student(int roll,string name);
    void display();

};

student::student(){
    roll=15;
    name="AURO";
}

student::student(int roll,string name){
    this->name=name;
    this->roll=roll;
}

void student::display(){
    cout<<name<<endl;
    cout<<roll<<endl;
}


int main(){
    student s,s1(22057020,"AURIO");
    s.display();
    s1.display();
    int x{5+5+7-8};
    cout<<x<<endl;
    return 0;
}
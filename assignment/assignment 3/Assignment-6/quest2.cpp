#include<iostream>
using namespace std;

class Student{

    public:
    string name;
    long roll;
    int age;
    public:
    void takeStudentDetails(){
    cout<<"Enter Student Name \n";
    getline(cin>>ws,name);
    cout<<"Enter Roll No. \n";
    cin>>roll;
    cout<<"Enter Age of the Student \n";
    cin>>age;
    }
    // Student(string name,long roll,int age);

};


class test : public Student
{
public:
    int *arr=new int[5];
    int sum=0;
    void takeInput(){
    cout<<"Enter Marks \n";
    sum=0;
    for (int i = 0; i < 5; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
    }
    void totalMarks(){
        cout<<"Total Marks obtained in Academics is "<<sum<<endl;
    }

    void DisplayDetails(){
        cout<<"Name:"<<Student::name<<endl;
        cout<<"Roll:"<<Student::roll<<endl;
        cout<<"Age:"<<Student::age<<endl;
    }
};

int main(){
    test t1;
    t1.takeStudentDetails();
    t1.takeInput();
    t1.DisplayDetails();
    t1.totalMarks();
    return 0;
}

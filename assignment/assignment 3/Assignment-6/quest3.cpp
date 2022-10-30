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
    
};

class Sports
{
private:
   
public:
   int SportScore;
   void takeScoreInput(){
    printf("Enter Sports Score \n");
    cin>>SportScore;
   }
};

class Result:public Sports,public test
{
private:
    /* data */
public:
    void DisplayDetails(){
        int total=Sports::SportScore+test::sum;
        float percent=(total/600.0)*100.0;
        cout<<"Total Marks "<<total<<"Percentage Secured is "<<percent<<endl;
    }
    Result(/* args */);
    ~Result();
};

Result::Result(/* args */)
{
}

Result::~Result()
{
}


int main()
{
    Result r1;
    r1.takeStudentDetails();    
    r1.takeInput();
    r1.takeScoreInput();
    r1.totalMarks();
    r1.DisplayDetails();
    return 0;
}
#include<iostream>
using namespace std;

class Student{

    public:
    string name;
    long roll;
    int age;
    // public:
    // Student(string name,long roll,int age);

};

class test : public Student
{
public:
    test(string name,long roll,int age);
    int *arr=new int[5];
    int sum=0;
    void takeInput(){
    cout<<"Print Marks \n";
    sum=0;
    for (int i = 0; i < 5; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
    }
    
    void displayDetails();
    ~test();
};

 void test :: displayDetails(){
    cout<<Student::name<<endl;
    cout<<Student::roll<<endl;
    cout<<Student::age<<endl;
    cout<<"Total Marks:"<<sum<<endl;
}


test::test(string name,long roll,int age)
{
    Student::name=name;
    Student::roll=roll;
    Student::age=age;
}

test::~test()
{
    cout<<"Empty Destructor"<<endl;
}

class Sports
{
private:
    
public:
int total;
    void gettotal(){
        printf("Enter Marks of the Student \n");
        cin>>total;
    }
    void DisplayTotal{
        cout<<"Total Marks Secured is "<<total<<endl;
    }
   
};



class Result: public Student,public test
{
private:
   float sumTotal=0;
public:
    void displaySum(){
        sumTotal=sumTotal+test::sum+Sports::total;
    }
};


int main()
{
    
    test t1("AURO",22057020,19);
    t1.takeInput();
    t1.displayDetails();
    return 0;
}
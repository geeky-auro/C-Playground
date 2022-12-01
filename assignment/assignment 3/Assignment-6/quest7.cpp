#include<iostream>
using namespace std;
class Employee
{
private:
    
public:
    string name;
    int id;
    double salary;
    void getData(){
        cout<<"Enter Name of the Employee "<<endl;
        getline(cin>>ws,name);
        cout<<"Enter Id of the Employee"<<endl;
        cin>>id;
    }    
};

class Regular:public Employee
{
private:
  
public:
    int DA,HRA,Basic;
    void getData(){
        DA=5600;
        HRA=10000;
        Basic=15000;
    }
    void calculateSal(){
        Employee::salary=+DA+Basic;
        cout<<"Salary of Regular Employee is "<<Employee::salary<<endl;
    }
};

class PartTime:public Employee
{
private:

public:
    int no_of_Hours,pay_per_hr;
    void getData(){
        no_of_Hours=9;
        pay_per_hr=2000;
    }
    void calculateSal(){
        Employee::salary=no_of_Hours*pay_per_hr;
        cout<<"Salary of Regular Employee is "<<Employee::salary<<endl;
    }
};

int main()
{
    Regular emp;
    emp.getData();
    emp.Employee::getData();
    emp.calculateSal();

    PartTime emp1;
    emp1.getData();
    emp1.Employee::getData();
    emp1.calculateSal();
    return 0;
}
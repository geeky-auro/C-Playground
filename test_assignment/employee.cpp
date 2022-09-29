#include <bits/stdc++.h>
using namespace std;
class employee{


    public:
        int id;
    string name;
    int basic;
    int age;
    double DA,HRA,gross=0.0;
    void putData(){
       
        cout<<"Enter Details of the Employee"<<endl;
        cout<<"Enter Name of the Employee"<<endl;
       getline(cin>>ws, name);
        cout<<"Age of the Employee"<<endl;
        cin>>age;
        cout<<"Enter ID of the Employee"<<endl;
        cin>>id;
        cout<<"Enter Basic Salary of the Employee"<<endl;
        cin>>basic;
        
    }
    void calculate(){
         DA=(80.0/100.0)*basic;
         HRA=(10.0/100.0)*basic;
         gross=basic+DA+HRA;
    }
    void display(){
        cout<<"ID"<<'\t'<<"NAME"<<'\t'<<"Age"<<'\t'<<"Basic"<<'\t'<<"DA"<<'\t'<<"HRA"<<'\t'<<"Gross Salary"<<endl;
        cout<<id<<'\t'<<name<<'\t'<<age<<'\t'<<basic<<'\t'<<DA<<'\t'<<HRA<<'\t'<<gross<<endl;
    }
};
int main(){
    employee *emp;
    cout<<"Enter Number of Employees "<<endl;
    int n;
    cin>>n;
    emp=new employee[n];
    for(int i=0;i<n;i++){
        emp[i].putData();
        emp[i].calculate();
    }
    for(int i=0;i<n;i++){
        emp[i].display();
    }
    return 0;
}
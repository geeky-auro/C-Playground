#include<iostream>
using namespace std;
struct employee{
    int id;
    char name[20];
    int age;
    int basic,gross;
    float DA,HRA;
};
int main(){
    cout<<"Enter No. of Employees "<<endl;
    int n;
    cin>>n;
  struct employee emp[n],*e;
  e=emp;
  cout<<"ENTER DETAILS OF THE EMPLOYEE ;"<<endl;
  for(int i=0;i<n;i++){
    cout<<"Enter Id of the Employee "<<endl;
    cin>>(e+i)->id;
    cout<<"Enter Name of the Employee "<<endl;
    scanf("%s", &e[i].name);
    cout<<"Enter Age of the Employee "<<endl;
    cin>>(e+i)->age;
    cout<<"Enter Basic Salary of the Employee "<<endl;
    cin>>(e+i)->basic;
  } 
  cout<<"ID"<<'\t'<<"Name"<<'\t'<<"Age"<<'\t'<<"Basic"<<'\t'<<"DA"<<'\t'<<"HRA"<<'\t'<<"Gross Salary"<<'\t'<<endl; 
  for (int i = 0; i < n; i++)
  {
    (e+i)->DA=(80.0/100.0)*(e+i)->basic;
    (e+i)->HRA=(10.0/100.0)*(e+i)->basic;
    (e+i)->gross=(e+i)->basic+(e+i)->HRA+(e+i)->DA;
    cout<<(e+i)->id<<'\t'<<(e+i)->name<<'\t'<<(e+i)->age<<'\t'<<(e+i)->basic<<'\t'<<(e+i)->DA<<'\t'<<(e+i)->HRA<<'\t'<<(e+i)->gross<<'\t'<<endl;
  }
  
    return 0;
}
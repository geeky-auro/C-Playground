#include<iostream>
using namespace std;

struct stud{
string st;
int roll;
int marks[5];
};

struct extros{
int total;
double percent;
};

int main(){
cout<<"Enter Number of Students"<<endl;
int n;
cin>>n;
struct stud s1[n];
for(int i=0;i<n;i++){
cout<<"Enter Name of the Student "<<endl;
cin>>s1[i].st;
cout<<"Enter Roll of the Student "<<endl;
cin>>s1[i].roll;
cout<<"Enter Marks..!"<<endl;
for(int j=0;j<5;j++){
cin>>s1[i].marks[j];
}
}

// Total Marks and Percentage of all students
struct extros q2[n];
for(int i=0;i<n;i++){
int sum=0;
for(int j=0;j<5;j++){
sum=sum+s1[i].marks[j];
}
q2[i].total=sum;
//Percentage of Students..!
q2[i].percent=(sum/500.0)*100.0;
}

for(int i=0;i<n;i++)
{
cout<<"Details of the Student-"<<i<< endl;
cout<<"Name of the Student "<<s1[i].st<<endl;
cout<<"Roll of the Student "<<s1[i].roll<<endl;
cout<<"Marks of the Student "<<endl;
for(int j=0;j<5;j++){
cout<<s1[i].marks[j]<<endl;
}
for(int l=0;l<n;l++){
    cout<<"Total Marks Secured is "<<q2[l].total<<endl;
    cout<<"Total Percentage Secured is "<<q2[l].percent<<endl;
}
cout<<"-----------------------------------"<<endl;
}

//Details of Students having percentage in a given range..!
cout<<"Enter Starting Range "<<endl;
int start;
cin>>start;
cout<<"Enter Ending Range "<<endl;
int end;
cin>>end;
for(int i=0;i<n;i++){

if(q2[i].percent>=start && q2[i].percent<=end){
cout<<"Name of the Student "<<s1[i].st<<endl;
cout<<"Roll of the Student "<<s1[i].roll<<endl;
cout<<"Percentage Secured is "<<q2[i].percent<<endl;
cout<<"Marks Secured is "<<q2[i].total<<endl;
}

}

// Sort the Array in Ascending Order of Marks..!
for(int i=0;i<n-1;i++){
int minIndex=i,min=q2[i].total;
for(int j=i+1;j<n;j++){
if(q2[j].total<min){
min=q2[j].total;
minIndex=j;
}
}
int temp=q2[i].total;
q2[i].total=q2[minIndex].total;
q2[minIndex].total=temp;

string sti=s1[i].st;
s1[i].st=s1[minIndex].st;
s1[minIndex].st=sti;

int tempo=s1[i].roll;
s1[i].roll=s1[minIndex].roll;
s1[minIndex].roll=tempo;
}

for(int i=0;i<n;i++)
{
cout<<"Details of the Student-"<<i<< endl;
cout<<"Name of the Student "<<s1[i].st<<endl;
cout<<"Roll of the Student "<<s1[i].roll<<endl;
cout<<"Total Marks Secured is "<<q2[i].total<<endl;
}
return 0;
}

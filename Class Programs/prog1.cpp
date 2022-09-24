#include<iostream>
using namespace std;

struct stud{
char st[100];
int roll;
int marks[5];
};

int main(){
struct stud s1;
cout<<"Enter Name of the Student "<<endl;
cin.getline(s1.st,100,'\n');

cout<<"Enter Roll of the Student "<<endl;
cin>>s1.roll;
cout<<"Enter Marks..!"<<endl;
for(int i=0;i<5;i++){
cin>>s1.marks[i];
}

cout<<"Details of the Student"<< endl;
cout<<"Name of the Student "<<s1.st<<endl;
cout<<"Roll of the Student "<<s1.roll<<endl;
cout<<"Marks of the Student "<<endl;
for(int i=0;i<5;i++){
cout<<s1.marks[i]<<endl;
}

return 0;
}

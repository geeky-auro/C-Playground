#include<iostream>
using namespace std;
int main(){
    string s="AURO";
    string st;
    // getline(cin,st);
    // cout<<st<<endl;
    cout<<s.substr(1)<<endl;
    cout<<s.substr(1,2)<<endl;

    string *i=new string("AURO SASWAT RAJ");
    cout<<"Address of s is "<<i<<endl;
    cout<<"Value of s is "<<(*i)<<endl;
    cout<<"Find the index "<<i->find('O')<<endl;
    *i="L";
    s[0]='L';
    cout<<"Replaced string is "<<*i<<endl;
    cout<<"Replaced string is "<<s<<endl;
    return 0;
}
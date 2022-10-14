#include<iostream>
using namespace std;
class Quest5{
public:
void dispChar(char c,int n);
void dispChar(char c);
void dispChar();

// Part 2 Bit b
void dispChar1(char c='*',int n=80);
};
void Quest5::dispChar(char c,int n){
    for(int i=0;i<n;i++){
        cout<<c;
    }
    cout<<endl;
}

void Quest5::dispChar(){
    for(int i=0;i<80;i++){
        cout<<"*";
    }
    cout<<endl;
}

void Quest5::dispChar1(char c,int n){
    for(int i=0;i<n;i++){
        cout<<c;
    }
    cout<<endl;
}

void Quest5::dispChar(char c){
    for(int i=0;i<80;i++){
        cout<<c;
    }
    cout<<endl;
}
int main(){
    Quest5 d;
    cout<<"By using Single Parameter (passing only char)"<<endl;
    cout<<"Enter a Character"<<endl;
    char ch;
    cin>>ch;
    d.dispChar(ch);
    cout<<"No Arguments"<<endl;
    d.dispChar();
    cout<<"Passing both Values to parameters of Function "<<endl;
    cout<<"Enter a Character"<<endl;
    cin>>ch;
    cout<<"Enter No. of times to be printed"<<endl;
    int n;
    cin>>n;
    d.dispChar(ch,n);

    // Part-2 Bit b
    cout<<"Enter a Character"<<endl;
    cin>>ch;
    d.dispChar1(ch);
    cout<<"Enter a Character"<<endl;
    cin>>ch;
    cout<<"Enter No. of times to be printed"<<endl;
    cin>>n;
    d.dispChar1(ch,n);
    d.dispChar1();
    

    return 0;
}
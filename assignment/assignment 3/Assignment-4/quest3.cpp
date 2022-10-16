#include<iostream>
using namespace std;

class Quest3
{
private:
    static int count;
public:
    Quest3();
    void input();
    void output();
    int display();
};

Quest3::Quest3()
{
    count=0;
}

void Quest3::input(){
    cout<<"This Function Takes Input"<<endl;
    count++;
}

void Quest3::output(){
    cout<<"THis function gives Output"<<endl;
    count++;
}

int Quest3::display(){
    cout<<"No. of times function is called is "<<count<<endl;
    return count;
}

// The most important Line { DO NOT FORGET TO DEFINE STATIC VARIABLE OUTSIDE THE CLASS}
int Quest3::count;

int main(){
    Quest3 q3;
    q3.input();
    q3.output();
    cout<<"No. of times Function is called is "<<q3.display()<<endl;
    q3.input();
    q3.output();
    cout<<"No. of times Function is called is "<<q3.display()<<endl;
    q3.input();
    q3.output();
    cout<<"No. of times Function is called is "<<q3.display()<<endl;
    return 0;
}
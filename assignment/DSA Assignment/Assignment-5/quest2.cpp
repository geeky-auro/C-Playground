#include<iostream>
using namespace std;

class Clock
{
private:
    int hours,minutes;
public:
    void displayTime();
    Clock(int hours,int minutes=0);
    ~Clock();
};

void Clock::displayTime(){
    cout<<"Current Time is "<<hours<<":"<<minutes<<endl;
}

Clock::Clock(int hours,int minutes)
{
    this->hours=hours;
    this->minutes=minutes;
}

Clock::~Clock()
{
    cout<<"Destructor has been invoked \n";
}

int main()
{
    Clock c(4),c1(4,50);
    c.displayTime();
    c1.displayTime();    
    return 0;
}
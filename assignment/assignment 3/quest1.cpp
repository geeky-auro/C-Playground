#include<iostream>
using namespace std;

class Area{

public:
void area(int r);
void area(int b,int h);
void area();
};

void Area::area(){
    cout<<"Area of the Rectangle"<<endl;
    int l,b;
    cin>>l>>b;
    int area=l*b;
    cout<<"Area of the Rectangle is "<<area<<endl;
}


void Area::area(int r){
    cout<<"Area of the Circle"<<endl;
    int area=3.14*r*r;
    cout<<"Area of the Circle is "<<area<<endl;

}

void  Area::area(int b,int h){
cout<<"Area of the Triangle "<<endl;
    int area=0.5*b*h;
    cout<<"Area of the Triangle is "<<area<<endl;

}

int main(){
    Area a;
    a.area();
    a.area(5);
    a.area(6,5);
    return 0;
}
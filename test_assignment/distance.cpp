#include<iostream>
#include<cmath>
using namespace std;

class Distance{
int x1,y1,x2,y2;
public:
void getData(){
    cout<<"Enter X Coordinates"<<endl;
    cin>>x1>>x2;
    cout<<"Enter Y Coordinates"<<endl;
    cin>>y1>>y2;
}
inline int calculate(){
    return  sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
};

int main(){
    Distance d;
    d.getData();
    cout<<"Distance between two points is "<<d.calculate()<<endl;
    return 0;
}

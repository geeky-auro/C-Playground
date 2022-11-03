// Create a class shape. 
// Derive three classes from it: Circle, Triangle and Rectangle. 
// Include the relevant data members and functions in all the classes. 
// Find the area of each shape and display it.

#include<iostream>
using namespace std;
#define PI 3.14
class Shape
{
private:
    
public:
    int radius;
    int length,breadth;
    int base,height;
    void TriangleInput(){
        cout<<"Enter Base and Height of the Triangle "<<endl;
        cin>>base>>height;
    }
    void CircleInput(){
        cout<<"Enter Radius of the Circle "<<endl;
        cin>>radius;
    }
    void RectangleInput(){
        cout<<"Enter Length and Breadth of the Rectangle "<<endl;
        cin>>length>>breadth;
    }
};

class Circle:public Shape
{
public:
   void area(){
    cout<<"Area of Circle is "<<PI*Shape::radius*Shape::radius<<endl;
   }
};

class Triangle:public Shape
{
public:
  void area(){
    cout<<"Area of the Triangle "<<0.5*Shape::base*Shape::height<<endl;
  }
};

class Rectangle:public Shape
{
public:
    void area(){
        cout<<"Area of the Rectangle "<<Shape::length*Shape::breadth<<endl;
    }
};

int main()
{
    Rectangle r1;
    r1.RectangleInput();
    Circle c1;
    c1.CircleInput();
    Triangle t1;
    t1.TriangleInput();
    r1.area();
    t1.area();
    c1.area();
    return 0;
}
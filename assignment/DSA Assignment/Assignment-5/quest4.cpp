#include<iostream>
using namespace std;

class Order
{
private:
    int count;
public:
    Order(int count)
    {
        this->count=count;
        cout<<"Constructor-"<<count<<" is called."<<endl;
    }
    ~Order()
    {
        cout<<"Destructor-"<<count<<" is called."<<endl;
    }
};

int main()
{
    Order o1(1);
    {
        Order o2(2),o3(3);
    }   
    return 0;
}
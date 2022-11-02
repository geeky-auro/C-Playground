#include<iostream>
using namespace std;

class Count
{
private:
   
public:
    static int count;
    Count(/* args */);
    ~Count();
};
int Count::count=0;
Count::Count(/* args */)
{
    count++;
    cout<<"Object no. "<<count<<" is Called. "<<endl;
}

Count::~Count()
{
}


int main()
{
    Count c1,c2,c3;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int a=5,c=6,b=0;
    b=a+c;
    cout << "Hello Saswat!!" << endl;
    cout << "Output of the Addition Operation:" << b <<endl;
    bool ai = true;
    cout << ai << endl;

    char d='x';             //->1 Byte
    cout << d<< endl;

    double dob=82496.96287;
     string st="Hello this is a string variable.>!..";
    cout << st << endl;
    //To Know the size ..!
    int size=sizeof(st);
    cout<<"Size of String is:"<<size<<endl;


    float f=1.23;
    cout<<"Size of Float is:"<<sizeof(f)<<endl;
    cout<<"Size of Int is:"<<sizeof(a)<<endl;
    cout<<"Size of Char is:"<<sizeof(d)<<endl;
    cout<<"Size of Boolean is:"<<sizeof(ai)<<endl;
    cout<<"Size of Double is:"<<sizeof(dob)<<endl;


    return 0;
}

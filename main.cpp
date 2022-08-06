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

    //Class-2
    //Take Input from the User..!
    //int inp1;
    //cout<<"Enter a Number to be executed"<<endl;
    //cin>>inp1;
    //cout<<"The Input was "<<inp1<<endl;

    //Take Input But this time take two Inp values
    //int inp2,inp3;
    // cin>> inp2 >> inp3;
    //cout<<"The Input Values of inp2 and inp3 is "<<inp2 <<"\t"<<inp3<<endl;


    //Illustration of garbage value..!
    int k;
    cout<<"Garbage value in K is-->"<<k<<endl;

    //class-3
    //Type-casting
    int ano;
    ano=100;
    char cno;
    cno=ano;
    cout<<cno<<endl;

    //case-2
    ano=1990;
    cno=ano;
    cout<<cno<<endl;

    //case-3
    cno='0';
    ano=cno;
    cout<<ano<<endl;

    //case-4
    float flo=1.28;
    ano=flo;
    cout<<ano<<endl;

    //case-5
    int i=10;
    char choi='a';
    cout<<(i+choi)<<endl;
    cout<<(char)(i+choi)<<endl;

    /*
    a-97
    b-98
    c-99
    d-100
    e-101
    f-102
    g-103
    h-104
    i-105
    j-106
    k-107
    */

    /*
    0->48
    1->49
    2->50
    3->51
    4->52
    5->53
    6->54
    7->55
    8->56
    9->57

    */

    cout<<('b'+5)<<endl;
    cout<<(char)74<<endl;//====>'J'

    //Class-4

    /*
    The range of Numbers we can store :-
    -2^(n-1) to 2^(n-1) and we find out binary of negative number using 2's complement
    Note:By default int,long,float,double ...etc all are signed-bit numbers
    that is MSB is used as the signed bit leaving the N-1 bit to be used to store variablesInorder to secure our MSB we can use unsigned keyword..!
    This will save our one more bit that is will replace
    our signed bit with the value of our number
    */

    char anum=234567;
    cout<<anum<<endl;

    /*
    In the above instance basically the number 234567 will be treated
    as 4 byte and after that the Least Significant Byte will be
    considered as Value for char ..!

    The above will Yield --> 'G' which a result of last byte of 4 byte integer.
    */

    /* Unsigned will always hold +ve Number */

    unsigned int bi=-123;

    /*
    =>1st of all it will store -123 as 4byte number ..! How?
        It will represent 123 in binary then,
        It will take out 2's Complement
        Then the final 4 bytes will be copied to "bi" variable
        Now "bi" gonna treat the number as unsigned which will result a huge
        number.
    */

    cout<<bi<<endl;

    //Class-5




    return 0;
}

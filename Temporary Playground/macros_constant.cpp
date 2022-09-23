#include<iostream>
using namespace std;
#define PI 3.14

#define MULTIPLY(a,b)  (a*b)
// Defining Global Variables..!
int a=10;

#define MULTIPLY1(a) a*a

#define SQUARE(x) x*x

void incre_a1(int a){
    a++;
    cout<<a<<endl;
}

void incre_a(){
    a++;
    cout<<a<<endl;
}

int main(){
    //THIS defined function will treat as string 
    /*
    "MULTIPLY(a, b)" will be replaced by "a*b" in code.
    So, MULTIPLY(2+3, 3+5) will be replaced by 2+3*3+5. 
    And according to operator precedence, multiply operator (*) has higher precedence than plus operator (+). 
    So, 3*3 will be evaluated first. Hence expression will become :
    2+9+5 = 16
    **/
    cout<<"Multiplication of Defined Function is "<< MULTIPLY(3+2,5+3);
    cout<<endl;
    cout<<"Multiplication:"<<MULTIPLY1(7);
    cout<<endl;
    int l=36/SQUARE(6);
    // 36/6*6=6*6=36
    cout<<endl;
    cout<<l<<endl;
    int r=5;
    {
        int a=10;
        cout<<a<<endl;
        incre_a1(a);
    }
    incre_a1(a);
    cout<<a<<endl;
    incre_a();
    cout<<a<<endl;
    int area=(PI*r)*r;
    cout<<"Area of the Circle is "<<area<<endl;
    return 0;
}
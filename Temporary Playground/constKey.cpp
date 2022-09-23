#include<iostream>
using namespace std;
int main(){
    // Const Int
    const int a=10;
    int const b=15;

    //Const Reference from a non COnst String
    int j=12;
    int &k=j;
    j++;

    cout<<k<<endl;

    // COnstant Reference from a const int//!
    int const j2=12;
    int const &k2=j2;

    /// Reference from a Const Int
    /// @return 
    int const l=25;
    int &li=l; // Cannot be Executed and Error will be thrown
    li++;
    cout<<li<<endl;


    return 0;
}
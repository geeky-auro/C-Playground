#include<iostream>
using namespace std;

void g(int const &a){
    a++;
}

void f(const int *p){

}

int main(){
    int const i=10;
   //This statement is invalid  int *p=&i;
    // Instead we do
    int const *p=&i;
    int j=12;
    int const *p2=&j;
    //f(p3 will give error becoz it cannot access const)
    //f(p3);
    g(j);


    cout<<*p2<<endl;
    j++;

    /// @brief Special Cases
    /// @return 
    int * const p2=&i;
    /// @brief Error Code 
    /// @return 
    int const * const p3=&i;
    p3=&j;
    (*p3)++;

    return 0;
}
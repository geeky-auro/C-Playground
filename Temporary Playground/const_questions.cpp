#include<iostream>
using namespace std;

int main(){
    int p=5;
    const int *q=&p;
    /// @brief Here you cannot change the value of the variable pointed by the pointer
    /// @return 
    int j=10;
    int * const q=&j;
    /// @brief Here you cannot update the address of the pointer
    /// @return 
    int k=10;
    int const * const q=&k;
    /// @brief Here you cannot update the address as well as value of the variable pointed by the pointer 
    /// @return 
        const int p = 5;
        int const *q = &p;
    /// @brief Here we cannot Update value of p as well as (*q)++
    /// @return 
    return 0;
}
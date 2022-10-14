#include <iostream>
using namespace std;
void Swap(int *a, int *b){
int temp=*a;
*a=*b;
*b=temp;
}
int main(){
int a, b;
cout << "Enter 1st number: "; cin >> a;
cout << "Enter 2nd number: "; cin >> b;
Swap(&a, &b);
cout << "After swapping using pass by reference - ";
cout << "\n1st number is "<<a;
cout << "\n2nd number is "<<b;
return 0;
}

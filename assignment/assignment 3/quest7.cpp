#include <iostream>
using namespace std;
void increment(int *n){
(*n)++;
}
int main(){
int n;
cout << "Enter a number to increment : ";
cin >> n;
increment(&n);
cout << "After increment, no. is : "<<n;
return 0;
}
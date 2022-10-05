#include <iostream>
using namespace std;
int sumOfDigits(int n) {
    // Write your code here
    int s=0;
    if (n==0)
    {
        /* code */
        return 0;
    }
    int smallCalc=(n%10)+sumOfDigits(n/10);
    return smallCalc;
    

}

int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}
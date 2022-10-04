#include <iostream>
using namespace std;
int multiplyNumbers(int m, int n) {
    // Write your code here
    if (n==0)
    {
        /* code */
        return 0;
    }
    int smallCalc=m+multiplyNumbers(m,n-1);
    return smallCalc;
    

}


int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}

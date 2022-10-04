#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double geometricSum(int k) {
    // Write your code here
    if(k==0){
        return 1.0;
    }

    return geometricSum(k-1)+(1.0/pow(2.0,k));
}

int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}
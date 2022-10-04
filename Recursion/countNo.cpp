#include <iostream>
using namespace std;

int countZeros(int n) {
    // Write your code here
    if(n==0){
        return 1;
    }
    // Most Important case 
    if(n<10){
        return 0;
    }else{
int smallCalc=countZeros(n/10);
    int m=n%10;
    if(m==0){
       return ++smallCalc;
    }
    return smallCalc;
    }
    
}

int main() {
    /*
    There are three conditions here:
    1. If number is single digit and 0 , then return 1
    2. If number is less than 10 i.e. it is a number 1,2,3...9 then return 0
    3. call recursion for zeros(number/10) + zeros(n%10)

    zeros(number){
    if(number == 0 ) //return 1
    if(number < 10) //return 0
    else
        zeros(number/10) + zeros(number%10)
    }
    n/10 will give us the n-1 digits from left and n%10 gets us the single digit. Hope this helps!
    */
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}

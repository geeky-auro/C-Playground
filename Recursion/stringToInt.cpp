#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int stringToNumber(char input[]) {
    // Write your code here
    if (strlen(input)==1)
    {
        return input[0]-48;
    }
    int b=input[0]-48;
    return b*pow(10,strlen(input)-1)+stringToNumber(input+1);
    // if(input[0]=='\0'){
    //     return 0;
    // }
    // int n=stringToNumber(input+1);
    // cout<<n<<endl;
    // cout<<input<<endl;
    // return n;
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
    return 0;
}
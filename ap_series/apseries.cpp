#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x,k=0;
    cin>>x;
    for(int i=1;true;i++){
        int ser=3*i+2;
        if(ser%4!=0){
            cout<<ser<<" ";
            k++;
        }
        if(k==x){
            break;
        }
    }

}

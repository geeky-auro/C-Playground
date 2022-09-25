#include<iostream>
using namespace std;

int count(int n){
    //write your code here
    if(n==0){
        return 0;
    }
    int small=count(n/10);
    // cout<<small<<endl;
    small++;
    // cout<<ans<<endl;
    return small;

}

int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}



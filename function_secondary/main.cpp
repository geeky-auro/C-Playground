#include <iostream>

using namespace std;
bool isprime(int n){
int i=2;
while(i<n){
    if(n%i==0){
        return false;
    }
    i++;
}
return true;

}

int main()
{
/*  check Range`    */
    int n;
    cin>>n;
    for(int x=2;x<=n;x++){
        if(isprime(x)){
            cout<<x<<endl;
        }
    }
    return 0;
}

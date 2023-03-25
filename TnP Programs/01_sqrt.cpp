#include <bits/stdc++.h>
using namespace std;

/*
    Find square root of a given number correct upto 3 decimal places. 
*/

/*
Using Newton Raphson Method

*/

double multiply(int x,int n){
    int f=1.0;
    for(int i=1;i<=n;i++){
        f=f*x;
    }
    return f;
}

void nthSqrt(int x,int n){
    double low=1;
    double high=n;
    double eps=1e-6;
    while((high-low)>eps){
        double mid=(high+low)/2.0;
        if(multiply(mid,x)>n){
            high=mid;
        }else{
            low=mid;
        }
    }
    cout<<"nth Root is "<<high<<endl;
}

int main()
{

//  int n;
//  cout<<"Enter N"<<endl;
//  cin>>n;
 nthSqrt(2,8);
// cout<<"Hello"<<endl;
//  Approx Value = n
 return 0;
}
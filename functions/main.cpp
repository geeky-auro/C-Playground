#include <iostream>

using namespace std;
int factorial(int n){
int i=1,ans=1;
while(i<=n){
    ans=ans*i;
    i++;
}
return ans;
}

int main()
{
    /*  nCr = n! / r! * (n - r)!    */
    int n,r;
    cin>>n>>r;
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_n_r=factorial(n-r);

    cout<<fact_n/(fact_r*fact_n_r)<<endl;
    /*5C2*/
}

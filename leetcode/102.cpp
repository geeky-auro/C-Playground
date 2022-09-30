//https://leetcode.com/submissions/detail/811615878/
#include<climits>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
        int rev=0,s=0,x=123;
        if(x<pow(2,-31) ||x>pow(2,31)-1){
            s=0;
            cout<<s<<endl;
        }
        else{
        while(x!=0){
            rev=x%10;
            s=s*10+rev;
            x=x/10;
        }
         if(s>=INT_MIN&&s<=INT_MAX){ 
        cout<<s<<endl; 
        }
        else{
            cout<<0<<endl;
        }
        }
       
        

       
    return 0;
}
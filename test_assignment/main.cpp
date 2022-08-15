#include<iostream>
using namespace std;
#include <climits>
#include <array>
int main(){

  // Write your code here
  /*
int i=1,n;
    cin>>n;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int j=i;
        while(j>=1){
            cout<<j;
            j--;
        }
        int k=2,l=i;
        while(k<=i){
            cout<<k;
            k++;
        }
        cout<<endl;
        i++;
    }
*/
/*
int i=1;
while(i<=5){
int l=5-i+1;
        while(l>=1){
            cout<<l;
            l--;
        }
        cout<<endl;
        i++;

}
*/

    // Write your code here
    /*
    int max=0,min=0,sec_min=0,n,i=1;
    int k;
    cin>>n;
    cin>>k;
    max=k;
    while(i<=n-1){
        cin>>k;
        sec_min=min;
        if(k>=max){
            min=max;
            max=k;
        }
        else{
            min=k;//3
        }

        cout<<max<<" "<<min<<" "<<sec_min<<endl;


        i++;
    }


    cout<<sec_min;
*/
int n;
cin>>n;
if(n<=2){
    cout<<INT_MIN;
    return 0;
}
else{
int imax,sec_max;
imax=INT_MIN;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
        if(arr[i]>imax){
            sec_max=imax;
            imax=arr[i];
        }
        else if(arr[i]>sec_max && arr[i]!=imax){
            sec_max=arr[i];
        }
}
cout<<sec_max;
//{1,5,3,6,7}



int imax=INT_MIN, secondMax=INT_MIN;

int num;
int count=1;
while(count<=n){
    cin>>num;
    if(num>imax){
        secondMax=max;
        max=num;
    }
    else if(num>secondMax && num!=imax){
        secondMax=num;
    }
    count++;
}
cout<<secondMax<<endl;

}




}


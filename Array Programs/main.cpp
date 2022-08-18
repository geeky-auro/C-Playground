#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int *arr,int n){

       int track=0;
    for(int i=0,inc=1;i<n;i++,inc+=2){
        if(inc>n){
            track=i;
            break;
        }
        else{
            arr[i]=inc;
        }
    }
    for(int i=n-1,dec=2;i>=track;i--,dec+=2){
        arr[i]=dec;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int *ar,int n){
    int b[n];
    copy(ar,ar+n,b);
    for(int i=n-1,j=0;i>=0;i--,j++){
        ar[j]=b[i];
    }

    cout<<"Inside reverse Array Function..!"<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}

int main()
{
   //int *arr=new int[9];
   /*for(int i=0;i<5;i++){
    cin>>*(arr+i);
   }
*/
 //  printArray(arr,9);
   cout<<endl;

   int iarray[5]={0,2,4,6,8};
   cout<<"Before reverse Array Function..!"<<endl;
   for(int i=0;i<5;i++){
    cout<<iarray[i]<<endl;
   }
   reverseArray(iarray,5);
   cout<<"After reverse Array Function in Main Function..!"<<endl;
   for(int i=0;i<5;i++){
    cout<<iarray[i]<<endl;
   }
    return 0;
}

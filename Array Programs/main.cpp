#include <iostream>

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

int main()
{
   int *arr=new int[9];
   /*for(int i=0;i<5;i++){
    cin>>*(arr+i);
   }
*/
   printArray(arr,9);

    return 0;
}

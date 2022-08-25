#include <iostream>

using namespace std;

void pushzeros(int *arr,int n){

    /*
    Change in the input array/list itself. You don't need to return or print the elements.

    You need to do this in one scan of array only. Don't use extra space.
    */

    for(int i=0;i<n;i++){
        //i=2
      // 9 8 0 0 2
      int j=i;
        if(arr[i]==0){

            //j=2

            while(j<n && arr[j]==0 ){
                j++;
            }
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            //9 8 2 0 0
        }
  }


    }


void simplePushZeros(int *arr,int n){

for(int i=0,k=0;i<n;i++){

    if(arr[i]==0){
        continue;
    }
    int temp=arr[i];
    arr[i]=arr[k];
    arr[k] =temp;
    k++;

}

}


void printArray(int *arr,int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}

int main()
{

    int n;
    cin>>n;
    int *arr=new int[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   // pushzeros(arr,n);
   simplePushZeros(arr,n);
    printArray(arr,n);

    return 0;
}

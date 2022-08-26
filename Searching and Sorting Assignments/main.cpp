#include <iostream>
#include <climits>

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

void rotate(int *input, int d, int n)
{
    for(int i=0;i<d && i<n;i++){
        int temp=input[0];
        for(int i=0;i<n;i++){
            input[i]=input[i+1];
        }
        input[n-1]=temp;
    }
}

void reverse(int startingIndex,int *arr, int n){

    for(int i=startingIndex;i<n;i++){
            if(i<n-i-1){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        }
    }


}

void trick_rotate(int *arr,int d,int n){

  if(d>=n && n!=0 ){
        d=d%n;
    }
    else{
        return;
    }
    reverse(0,arr,d);
   reverse(n-d-1,arr,n);
   reverse(0,arr,n);
   reverse(0,arr,n-d);
}

int secondLargest(int *arr, int n){
    int largest=INT_MIN,secondLarge=INT_MIN;
    if(n<=1){
        return INT_MIN;
    }
    for(int i=0;i<n;i++){

        if(arr[i]>largest){
            secondLarge=largest;
            largest=arr[i];
        }
        else if(arr[i]> secondLarge && arr[i]<largest && secondLarge < largest){
            secondLarge=arr[i];
        }

    }
    return secondLarge;
}


void sort012(int *arr, int n)
{
    //Write your code here
    int c_0=0,c_1=0,c_2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c_0++;
        }
        else if(arr[i]==1){
            c_1++;
        }
        else{
            c_2++;
        }
    }
    int i=0;
    while(i<c_0){
        arr[i++]=0;
    }
    int j=i;
    while(j<n-c_1){
        arr[j++]=1;
        i++;
    }
    while(i<n){
        arr[i++]=2;
    }

}

void simplifiedsort012(int *arr, int n){

    int i=0,nz=0,nt=n-1;
    while(i<n &&i<=nt){
        if(arr[i]==0){
              int temp=arr[i];
            arr[i]=arr[nz];
            arr[nz]=temp;
            nz++;
        }
        else if(arr[i]==2){
                int temp=arr[i];
            arr[i]=arr[nt];
            arr[nt]=temp;
            nt--;
            continue;

        }

        i++;
    }


}

void sumOfTwoArrays(int *arr1, int size1, int *arr2, int size2, int *output)
{       cout<<"Detailed Process"<<endl;
    //Write your code here
        int size=0;
    if(size1>size2){
        size=size1+1;
    }
    else{
        size=size2+1;
    }
    int i=size-1,j=size1-1,k=size2-1,carry=0;


    while(i>=0){
            /*
        if(size1<=0 || j<0){
            output[i]=0+arr2[k]+carry;
        }
        else if(size2<=0 || k<0){
            output[i]=arr1[j]+0+carry;
        }
        */
        if((k<0 && j<0) || i==0){
            output[i]=carry;
            break;
        }
        if(k<0){
            output[i]=arr1[j]+0+carry;
        }
        else if(j<0){
            output[i]=0+arr2[k]+carry;
        }
        else{
        output[i]=arr1[j]+arr2[k]+carry;
        }


        carry=output[i]/10;
        output[i]=output[i]%10;


        cout<<"Carry is "<<carry<<endl;
        k--;
        j--;
        i--;
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
        int *arr1=new int[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m;
    cin>>m;
     for(int i=0;i<m;i++){
        cin>>arr1[i];
    }

    int *output=new int[100];

   // pushzeros(arr,n);
   // simplePushZeros(arr,n);
  // rotate(arr,2,n);
  //reverse(arr,n);

 // trick_rotate(arr,2,n);
   // cout<<"Second largest is "<<secondLargest(arr,n)<< endl;
   //sort012(arr,n);
  // simplifiedsort012(arr,n);
   int size=0;
    if(n>m){
        size=n+1;
    }
    else{
        size=m+1;
    }
  sumOfTwoArrays(arr,n,arr1,m,output);
    printArray(output,size);

    return 0;
}

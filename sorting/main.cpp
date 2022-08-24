#include <iostream>

using namespace std;

void selectionSort(int *arr,int n){

for(int i=0;i<n-1;i++){
    int min=arr[i],minIndex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            minIndex=j;
        }
    }
    //Swapping ofMinimum Element with ith index
    int temp=arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=temp;
}

}

void bubblesort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}

void insertionSort(int *arr,int n){

    for(int i=0;i<n;i++){
        int count=0,element=arr[i],index=i;
        for(int j=i-1;j>=0 && element<arr[j];j--){
                index=j;
            count++;
        }
        for(int k=i-1,l=0;k>=0;k--,l++){
            if(l==count){
                break;
            }
            arr[k+1]=arr[k];
        }
        arr[index]=element;

    }

}

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 //   selectionSort(arr,n);
 //   bubblesort(arr,n);
      insertionSort(arr,n);
    printArray(arr,n);

    return 0;
}

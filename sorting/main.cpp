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

void optimizedInsertionSort(int *arr, int n){

for(int i=1;i<n;i++){
        int current=arr[i],j;
    for(j=i-1;j>=0;j--){
        if(current<arr[j]){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1]=current;
}

}

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    //Write your code here
    int counter_i=0,counter_j=0,ans_index=0,i;
    for( i=0;i<(size1+size2);i++){
        if(arr1[counter_i]<arr2[counter_j] && counter_i<size1){
            ans[i]=arr1[counter_i];
            counter_i++;
            continue;
        }
        else if(counter_j<size2){
            ans[i]=arr2[counter_j];
            counter_j++;
            continue;
    }

    while(counter_i<size1 && i<size1+size2){
        ans[i++]=arr1[counter_i];
        counter_i++;
    }
    while(counter_j<size2 && i<size1+size2){
                ans[i++]=arr2[counter_j];
        counter_j++;
    }

    break;
/*
    for(int j=counter_i,k=ans_index;j<size1 && k<(size1+size2);j++,k++){
        ans[ans_index]=arr1[j];
    }
    for(int j=counter_j,k=ans_index;j<size2 && k<(size1+size2); j++,k++){
         ans[ans_index]=arr2[j];
    }
    */


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
    int n,m;
    cin>>m;
    cin>>n;
    int *arr1=new int[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }

    int *arr2=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int *ans=new int[m+n];

 //   selectionSort(arr,n);
 //   bubblesort(arr,n);
 //     insertionSort(arr,n);
 //     optimizedInsertionSort(arr,n);
 merge(arr1,m,arr2,n,ans);
    printArray(ans,m+n);

    return 0;
}

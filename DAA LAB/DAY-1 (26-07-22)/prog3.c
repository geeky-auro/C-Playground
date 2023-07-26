#include<stdio.h>

void reverse(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}


int main(){
    int x;
    printf("Enter the Size of the Array \n");
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    
    reverse(arr,x);
    return 0;
}
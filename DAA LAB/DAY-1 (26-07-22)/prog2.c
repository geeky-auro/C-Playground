#include<stdio.h>

void prefixSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        printf("%d ",sum);
    }
}

int main(){
    int x;
    printf("Enter the number of ELements \n");

    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }

    prefixSum(arr,x);

}
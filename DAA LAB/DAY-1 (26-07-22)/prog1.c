#include<stdio.h>

void second_smallest(int arr[],int n){
    // printf("printing");
    int small=10000000,sec_small=10000000;
    for(int i=0;i<n;i++){
        if(arr[i]<=small){
            small=arr[i];
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        if(arr[i]<=sec_small && arr[i]>small){
            sec_small=arr[i];
        }
    }
    
    printf("Second Smallest No. is %d \n",sec_small);
}
// 
void second_largest(int arr[],int n){
    int large=0,sce_large=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=large){
            large=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>= sce_large && arr[i]<large){
            sce_large=arr[i];
        }
    }
    printf("Second Largest No. is %d",sce_large);
}


int main(){
    int x;
    printf("Enter the size of the Array");
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    // printf("Starting ");
    second_smallest(arr,x);
    second_largest(arr,x);
}
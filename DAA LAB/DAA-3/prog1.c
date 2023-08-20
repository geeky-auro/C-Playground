#include<stdio.h>


int BS(int arr[],int n,int k){
    int start=0,end=n-1,mid=(start+end)/2;
    int ans=-1;
    while (start<=end)
    {
        if(arr[mid]==k){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]>k){
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return ans;
}


int main(){
    int n;
    printf("Enter the size of the Array \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter an ELement to be searched \n");
    scanf("%d",&k);
    printf("%d found -> Left most Position of the Element %d",k,BS(arr,n,k));
    return 0;
}
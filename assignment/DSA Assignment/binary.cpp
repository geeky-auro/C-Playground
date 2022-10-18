#include<stdio.h>

void applyBinarySearch(int *arr,int n,int x){
    int start=0,end=n-1,mid=(start+end)/2;
    int k=0;
    while (start<=end)
    {
        if (*(arr+mid)==x)
        {
            printf("Element Present at Index is %d",mid);
            k=1;
            break;
        }
        else if (*(arr+mid)>x)
        {
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid=(start+end)/2;
        
        
    }
    if (k==0)
    {
        printf("Element not Found");
    }
    
    
}

int main(){
    printf("Enter No. of ELemets");
    int n;
    scanf("%d",&n);
    int arr[100];
    printf("Enter Elements in an Array ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(arr+i));
    }
        printf("Enter a Element to be Searched ");
    int x;
    scanf("%d",&x);
    applyBinarySearch(arr,n,x);    
    return 0;
}
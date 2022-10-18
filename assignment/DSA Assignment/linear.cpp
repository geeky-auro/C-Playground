#include<stdio.h>
int applyLinear(int *arr,int n,int x){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
        
    }
    return -1;
    
}
int main(){
    int arr[100];
    printf("Enter No. of Elements to be inserted ");
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(arr+i));
    }
    printf("Enter a Element to be Searched ");
    int x;
    scanf("%d",&x);
    int z=applyLinear(arr,n,x);
    if (z==-1)
    {
        printf("Element not found");
    }else{
        printf("Element found at index:%d",z);
    }
    
    return 0;
}
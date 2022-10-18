#include<stdio.h>
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
int main(){
    printf("Enter size of the Array ");
    int arr[100];
    int n;
    scanf("%d",n);
    printf("Enter Elements in the Array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(arr+i));
    }
    selectionSort(arr,n);
     for (int i = 0; i < n; i++)
    {
        printf("%d ",*(arr+i));
    }
    
    return 0;
}
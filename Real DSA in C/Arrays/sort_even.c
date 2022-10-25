#include<stdio.h>
#include<conio.h>

void onlySOrt(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }

    // Printing of the Array
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

int main(){
    int arr[]={2,5,6,7,61,9,799,23,108,10};
    // Sort only Even Position in an Array  :0
    printf("Before Sorting of the Array \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    for (int i = 0; i < 10; i+=2)
    {
        for (int j = i+2; j < 10; j+=2)
        {
            if (arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    printf("After SOrting of the Array \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",*(arr+i));
    }
    int arr1[]={2,6,5,4,3,2,9,0,122,89,191,200};    
    onlySOrt(arr1,12);
    return 0;
}
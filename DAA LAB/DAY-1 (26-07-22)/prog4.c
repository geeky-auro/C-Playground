#include<stdio.h>

    void duplicates(int arr[], int n){
        
        for(int i=0; i<n;i++){
            int count=1,store_dupli=0;
            for(int j=i+1; j<n; j++){
                if(arr[i]==arr[j]){
                    count++;
                    store_dupli=arr[i];
                }
            }
            if(count>=2){
                printf("Duplicate Element is %d \n",store_dupli);
                printf("Count=%d",count);
            }
        }
    }

    struct HashMap{
        int n;
        int key[n];
    
    }

    void most_repeating_Element(int vect[],int n){

    }

int main(){
    int x;
    printf("Enter the size of the Array \n");
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }

    duplicates(arr,x);


}
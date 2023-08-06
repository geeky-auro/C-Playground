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

    int most_repeating_Element(int arr[],int size){
          int maxCount = 0;   // To keep track of maximum frequency
    int mostRepeating = 0;  // To store the most repeating element

    for (int i = 0; i < size; i++) {
        int count = 1;  // Initialize the count for each element

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mostRepeating = arr[i];
        }
    }

    return mostRepeating;
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
    printf("\n");
    printf("Most Repeating Element in and Arrays is %d \n",most_repeating_Element(arr,x));

}
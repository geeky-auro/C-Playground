#include<stdio.h>
void insertionSort(int *arr, int n)
{
    //Write your code here
        for(int i=0;i<n;i++){
        int count=0,element=arr[i],index=i;
        for(int j=i-1;j>=0 && element<arr[j];j--){
                index=j;
            count++;
        }
        for(int k=i-1,l=0;k>=0;k--,l++){
            if(l==count){
                break;
            }
            arr[k+1]=arr[k];
        }
        arr[index]=element;

    }

}

int main()
{
	
	
		int size;
		printf("Enter Size of the Array \n");
        scanf("%d",&size);
		int input[100];
    printf("Enter Elements in the Array \n");
		for (int i = 0; i < size; i++)
		{
			scanf("%d",(input+i));
		}

		insertionSort(input, size);

		for (int i = 0; i < size; i++)
		{
			printf("%d ",*(input+i));
		}

	

	return 0;
}
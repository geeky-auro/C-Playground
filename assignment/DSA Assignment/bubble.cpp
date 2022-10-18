#include<stdio.h>
#include<conio.h>
void bubbleSort(int *arr, int n)
{
      for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(*(arr+j)>*((arr+j)+1)){
                int temp=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
}

int main()
{
		int size;
		scanf("%d",&size);
		int input[100];
		for (int i = 0; i < size; ++i)
		{
			scanf("%d",(input+i));
		}
		bubbleSort(input, size);
		for (int i = 0; i < size; ++i)
		{
			printf("%d ",*(input+i));
		}
	return 0;
	
}
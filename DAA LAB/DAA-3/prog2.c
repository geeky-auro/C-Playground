#include<stdio.h>
#include<stdlib.h>
 
 
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void insertionSort_desc(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
 

int main(){
 
FILE *INPUT,*OUTPUT;
INPUT=fopen("inAsce.dat","r");
if(INPUT==NULL){
perror("There is some problem in Reading the File \n");
exit(0);
}
 
OUTPUT=fopen("outInsAsce.dat","w");
if(OUTPUT==NULL){
perror("There is some problem in Displaying Results to the FIle \n");
exit(0);
}
 
int choice;
printf("Enter User Choice \n");
int arr[500],count=0;
int no;
 
while (fscanf(INPUT, "%d", &no) == 1) {
        arr[count++]=no;
    }
scanf("%d",&choice);
 
switch(choice){
	case 1:{
		// perform_insetion_sort_descending(arr,count);
		int n=count;
		int high=count-1;
		insertionSort(arr,high);
		break;
 
	}
	case 2:{
 
		int n=count;
		int high=count-1;
		insertionSort_desc(arr,high);
		break;
	}
	case 3:{
		// show_random_data(arr,count);
		break;
	}
	case 4:{
		perror("Error in the program \n");
		break;
	}
}
 
for(int i=0;i<count;i++){
	fprintf(OUTPUT, "%d ",arr[i]);
}
 
return 0;
}

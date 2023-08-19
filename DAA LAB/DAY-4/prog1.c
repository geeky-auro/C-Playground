#include<stdio.h>
#include<stdlib.h>
 
 
void merge(int arr[],int low,int mid,int high){
	int l=low,r=mid+1;
	int temp[(high-low)+1],k=0;
	while(l<=mid && r<=high){
		if(arr[l]>arr[r]){
		temp[k++]=arr[l++];
		}else{
		temp[k++]=arr[r++];
		}
	}
 
	while(l<=mid){
		temp[k++]=arr[l++];
	}
 
	while(r<=high){
		temp[k++]=arr[r++];
	}
	for(int i=low;i<=(high);i++){
		arr[i]=temp[i-low];
	}
 
 
}
 
void merge_dec(int arr[],int low,int mid,int high){
	int l=low,r=mid+1;
	int temp[(high-low)+1],k=0;
	while(l<=mid && r<=high){
		if(arr[l]<arr[r]){
		temp[k++]=arr[l++];
		}else{
		temp[k++]=arr[r++];
		}
	}
 
	while(l<=mid){
		temp[k++]=arr[l++];
	}
 
	while(r<=high){
		temp[k++]=arr[r++];
	}
	for(int i=low;i<=(high);i++){
		arr[i]=temp[i-low];
	}
 
 
}
 
 
void sort_merge_descending(int arr[],int low,int high){
	// base case
	if(low>=high)
	return;
	int mid=(low+high)/2;
	sort_merge_descending(arr,low,mid);
	sort_merge_descending(arr,mid+1,high);
	merge_dec(arr,low,mid,high);
}
 
void sort_merge(int arr[],int low,int high){
	// base case
	if(low>=high)
	return;
	int mid=(low+high)/2;
	sort_merge(arr,low,mid);
	sort_merge(arr,mid+1,high);
	merge(arr,low,mid,high);
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
		sort_merge_descending(arr,0,high);
		break;
 
	}
	case 2:{
 
		int n=count;
		int high=count-1;
		sort_merge(arr,0,high);
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

#include<iostream>
using namespace std;
// Reference Video:https://www.youtube.com/watch?v=COk73cpQbFQ&ab_channel=mycodeschool
/*
	To apply the method explained in the hint video, we have to add two more parameters in the function call. This can be done by calling a helper function from given function. The helper function can have three parameters: array, start index, end index.  
	
	Skeleton code to achieve this:
	#include <iostream>
	using namespace std;
	
	void quickSort(int input[], int start, int end)
	{
    		// your code goes here 
	}
	void quickSort(int input[], int size)
	{
    		quickSort(input, 0, size - 1);
	}
		
*/

int partition(int *input,int start,int end){

    int pivot=input[end];
    // 1st Swapping of pivot with mid

     int i = (start); // 0-1  
  
    for(int j = start; j <= end-1 ; j++)  
    {  
        // If current element is smaller than the pivot  
        if (input[j] <= pivot)  
        {  
              
            int t = input[i];  
            input[i] = input[j];  
            input[j] = t;
            ++i; // increment index of smaller element  
        }  

    }  
    int t = input[i];  
    input[i] = input[end];  
    input[end] = t;  
    // Pivot Element Index
    return i;

}
void quickSort(int input[], int start, int end)
	{
        if (start>end)
        {
            return;
        }
        
        int pIndex=partition(input,start,end);
        quickSort(input,start,pIndex-1);
        quickSort(input,pIndex+1,end);
    		// your code goes here 
	}
void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    quickSort(input, 0, size - 1);
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}



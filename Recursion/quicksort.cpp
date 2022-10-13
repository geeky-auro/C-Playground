#include<iostream>
using namespace std;

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
void partition(int *arr,int si,int ei){
        for (int i = 0; i < ei; i++)
    {
        cout<<arr[i]<<" ";
    }
    int n=(si+ei)/2;
    // swap 1
    int temp=arr[si];
    arr[si]=arr[n];
    arr[n]=temp;
    int j=si,k=ei;
    bool l1=true,l2=true;
    while (j<n && k>n)
    {
        if (!(arr[j]<arr[n]))
        {
        l1=false;
        }else{
            l2=true;
            j++;
        }

        if (!(arr[k]>arr[n]))
        {
            l2=false;
        }else{
            k--;
            l2=true;
        }
        
        if (l1==false && l2==false)
        {
            int temp=arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
        }   
    }

    for (int i = 0; i < ei; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void quickSort(int input[], int start, int end)
	{
        partition(input,start,end);
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



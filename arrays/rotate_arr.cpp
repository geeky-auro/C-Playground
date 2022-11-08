#include <iostream>
using namespace std;
void rotate(int *arr, int d, int n)
{
    //Write your code here
    /*
    7
    67
    567
    4567
    
    
    */
      if (n==0)
    {
        return;
    }
    for (int i = 0; i < d; i++)
    {
        int temp=arr[0];
        for (int j = 0; j < n-1; j++)
        {
           arr[j]=arr[j+1];
        }
        arr[n-1]=temp;        
    }
}

void reverse(int *arr,int start,int end){
    
    while (start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
}

void rotate1(int *arr, int d, int n){
    reverse(arr,0,n-1);
    reverse(arr,0,n-d-1);
    reverse(arr,n-d,n-1);
}
int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate1(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}
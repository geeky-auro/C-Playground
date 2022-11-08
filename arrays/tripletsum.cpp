#include <iostream>
#include <algorithm>
using namespace std;

int tripletSum(int *arr, int n, int num)
{
    //
    /*
    12/3=4
    1 2 3 4 5 6 7
    12
    5+4+3
    6+5+1
    6+4+2
    7+3+2
    7+4+1
    
    */ 
    //
    sort(arr,arr+n);
    int count=0;
	// for (int i = 0; i < n-2; i++)
    // {
    //     for (int j = i+1; j < n-1; j++)
    //     {
    //         for (int k = j+1; k < n; k++)
    //         {
    //             if (arr[i]+arr[j]+arr[k]==num)
    //             {
    //                 count++;
    //                 // cout<<arr[i]<<arr[j]<<arr[k]<<endl;
    //             }
                
    //         }
            
    //     }
        
    // }
    // return count;
    for (int i = 0; i < n-2; i++)
    {
        int sum=num-arr[i];
        int start=i+1;
        int end=n-1;
        while (start<end)
        {
            int t=arr[start]+arr[end];
            if (t==sum)
            {
                start++;
                end--;
                count++;
            }else if (t<sum)
            {
                start++;
            }else{
                end++;
            }
        }
        
    }
    if (count==0)
    {
        return 0;
    }
    else
    return count+1;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;
        

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}
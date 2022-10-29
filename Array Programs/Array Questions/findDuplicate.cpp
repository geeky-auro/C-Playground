#include <iostream>
using namespace std;
int findDuplicate(int *arr, int n)
{
    // Find the sum of elements since it consists of a total of n-2 elements so
    // n(n+1)/2==== (n-2)(n-2+1)/2==== (n-2)(n-1)/2

    // Since Array Elements is contained in such a way that they lie in a series order in 0 to n-2 
    // natural no's i.e 0,1,2,3,4,5........n-2
    // They cannot be entered in any order fashion for ex:0,5,6,7,8,etc.. X
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    int sumOfN=(n-2)*(n-1)/2;
    return sum-sumOfN;
    
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}
#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    int index=0;
    // 26,30,33,38,1,3,6,11,12,17,22
   for (int i = 0; i < size-1; i++)
    {
       if (input[i]<input[i+1])
       {
        continue;
       }
       
           index=i;
           break;
       
       
    }
    return index+1;
    
}

int main()
{

	// int t;
	// cin >> t;
	// while (t--)
	// {

		// int size;
		// cin >> size;
		// int *input = new int[size];
        int input[]={26,30,33,38,1,3,6,11,12,17,22 };
		// for (int i = 0; i < size; i++)
		// {
		// 	cin >> input[i];
		// }

		cout << arrayRotateCheck(input, 11) << endl;
		// delete[] input;
	// }
	
	return 0;
}

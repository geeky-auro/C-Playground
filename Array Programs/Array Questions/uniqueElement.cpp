#include <iostream>
using namespace std;

int findUnique(int *arr, int n) {
    // 2^3^5^5^3 -> 
    // Find XOR of all the elements and you will get the duplicate element..! 
    int ixor=arr[0];
    for (int i = 0; i < n-1; i++)
    {
        ixor=ixor^arr[i+1];
    }
    return ixor;
// int unique=0;
// bool isUnique=true;
// for (int i = 0; i < n; i++)
// {
//     isUnique=true;
//     for (int j = 0; j < n; i++)
//     {
               
//        if (arr[i]==arr[j] && i!=j)
//        {
//         isUnique=false;
//         break;
//        }   
//        else{
//         isUnique=true;
//        }    
//     }
//     if (isUnique)
//     {
//         return arr[i];
//     }
    

// }
// return 1;

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}
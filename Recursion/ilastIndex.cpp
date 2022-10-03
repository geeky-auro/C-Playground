#include<iostream>
using namespace std;

int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

    if(size<0){
        return -1;
    }
    if (input[size]==x){
        return size;
    }else
    {
        /* code */
        return lastIndex(input,size-1,x);
    }
    

}

int main(){
    int arr[] = { 3, 1, 4, 4, 2, 3, 1 };
     int N = sizeof(arr) / sizeof(arr[0]);
    int K = 4;
    cout << lastIndex(arr, N - 1, K);
    return 0;
}
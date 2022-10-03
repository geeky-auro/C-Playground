#include<iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
  
     // If the input array becomes empty
      if(size == 0)
        return 0;
 
    // Getting the recursive answer
      int smallAns = allIndexes(input, size - 1, x, output);
      cout<<"Small Answer getting executed with a value "<<smallAns<<endl;
      cout<<"SIze "<<size<<endl;
      // If the last element of input array is equal to x
    if(input[size - 1] == x)
    {
      // Insert the index of last element of the input array into the output array
      // And increment ans
      cout<<"Inside inputBlock smallAns "<<smallAns<<endl;
      output[smallAns++] = size - 1;
      cout<<"Small ANs After Execution "<<smallAns<<"  Size "<<size<<endl;
    }
    cout<<"Before Return Executed is "<<smallAns<<endl;
    return smallAns;
   

}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}
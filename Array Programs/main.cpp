#include <iostream>

using namespace std;

void printArray(int *arr){
 for(int j=0;j<5;j++){
    cout<<*(arr+j)<<endl;
   }



}

int main()
{
   int *arr=new int[5];
   for(int i=0;i<5;i++){
    cin>>*(arr+i);
   }

   printArray(arr);

    return 0;
}

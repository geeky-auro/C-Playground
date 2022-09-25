#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
if(size==0 || size==1){
    return true;
}
if(arr[0]>arr[1]){
    return false;
}
bool is_smallSorted=isSorted(arr+1,size-1);
return is_smallSorted;
}
int main(){
    int arr[]={2,3,1,8};
    cout<<isSorted(arr,4)<<endl;
    return 0;
}
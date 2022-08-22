#include <iostream>

using namespace std;
int const size=5;
int main()
{

    int *arr=new int[size];
    for(int i=0;i<size;i++){
        cout<<"Enter an element :)";
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the Element to be searched :)";
    cin>>x;
    int start=0,iend=size-1,mid=(start+iend)/2;

    while(start<=iend){
           if(x==arr[mid]) {
            cout<<"Element is present"<<"At Index "<<mid ;
            return 0;
           }
           else if(arr[mid]<x){
            start=mid+1;
           }
           else{
           iend=mid-1;
           }
            mid=(start+iend)/2;

    }
    cout<<"Element is not present ;-)";


    return 0;
}

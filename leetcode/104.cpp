#include<iostream>
#include<vector>
using namespace std;

int search_index(vector <int> &arr,int x){
    // 1,3,5,6,8    // x=7
    
    if(x<arr[0]){
        return 0;
    }else if(x>arr[arr.size()-1]){
        return arr.size();
    }
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]<x && x<arr[i+1]){
            return i+1;
        }
    }
    return -1;

}
int searchInsert(vector<int>& arr, int x) {
        int start=0,iend=arr.size()-1;
        while (start < iend) {
        int m = (start + iend)  / 2;
 
       
        if (arr[m] == x)
            return m;
 
       
        if (arr[m] < x)
            start = m + 1;
 
       
        else
            iend = m - 1;
    }
 
    // if we reach here, then element was
    // not present
    cout<<"I was Here"<<endl;
    return search_index(arr,x);
    }

int main(){
    cout<<"Hello World"<<endl;
    vector <int> num={1,3,5,6};
    cout<<searchInsert(num,2);
    return 0;
}
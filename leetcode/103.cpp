// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
int retrunIndex(int num){
    return num;

}
    int bubbleSort(vector<int> nums,int element){
        bool isThere=false;
        int start=0,end=nums.size()-1,mid=start+end/2;
        while(start>end){
            if(nums[mid]==element){
                isThere=true;
            }else if(nums[mid]>element){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        if(isThere){
            return retrunIndex(mid);
        }
        else{
            return INT_MIN; 
        }
    }
    
    // int removeDuplicates(vector<int> &nums) {
    //     int count=0,prev_el=nums[0];
    //     for(int i=1;i<nums.size();i++){
    //         int ele_index=bubbleSort(nums,prev_el);
    //         if(ele_index!=INT_MIN){
    //             if()
    //         }
            
    //     }
    //     return 0;
    // }

    

    int removeDuplicates(vector<int> &arr) {
       
       if(arr.size()==0){
           return 0;
       }

       if(arr.size()==1){
        return 1;
       }

        int i=0,temp=arr[i],count=0;
        while(i+1<arr.size()){
            if(temp==arr[++i] && i<arr.size()){
                temp=arr[i];
                arr[i]=INT_MAX;
                continue;
            }
            temp=arr[i];
            count++;
        }
        for(int i=0;i<arr.size()-1;i++){
            int minIndex=i,min=arr[i];
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]<min){
                    min=arr[j];
                    minIndex=j;
                }
            }
            int temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }

        // for(int x:arr){
        //     cout<<x<<endl;
        // }
             
        return count+1;
    }
};

int main(){
    vector <int> num={1,1};
    Solution s;
    cout<<s.removeDuplicates(num)<<endl;
    return 0;
}
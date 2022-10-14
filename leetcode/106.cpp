#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    /*bool countScore(vector<int>& nums,int player1,int player2,bool turn){
        if (nums.size()==0)
        {
            if (player1>player2)
            {
                cout<<"player 1 "<<player1<<endl;
                return true;
            }else{
                cout<<"player 2 "<<player2<<endl;
                return false;
            }    
        }
        
        if (turn)
        {
          player1=player1+nums[nums.size()-1];
           nums.pop_back();
           int size=nums.size();
           cout<<size<<endl;
          bool k=countScore(nums,player1,player2,false);
        }else{
            player2=player2+nums[nums.size()-1];
            nums.pop_back();
           int size=nums.size();
           cout<<size<<endl;
          bool k=countScore(nums,player1,player2,true);
        }

         if (player1>player2)
            {
                cout<<"player 1 "<<player1<<endl;
                return true;
            }else{
                cout<<"player 2 "<<player2<<endl;
                return false;
            }    
        
    }
    */
   int calculateLargest(vector<int> &arr,int n){
     int i;
     
    // Initialize maximum element
    int max = arr[0];
 
    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max){max = arr[i];
        break;}
            
    return i;
   }
   int calculateOptimal(vector<int> nums,int sIndex,int eIndex){
    // For left to right
    /*int lSum=0;
    for(int i=sIndex;i<eIndex;i+=2){
        lSum=lSum+nums[i];
    }
    for (int i = eIndex; i >=sIndex; i-=2)
    {  
    }
    */
   int index=calculateLargest(nums,sIndex+eIndex-1);
   if ((index-sIndex)<(eIndex-eIndex))
   {
    //Forward from Left
   }else{
    // Forward from Right
   }
   
   }
   bool countScore(vector<int> nums,int sIndex,int eIndex,bool turn){
        //1 for left to right 
        //2 for right to left
        calculateOptimal(nums,sIndex,eIndex);
   }
    bool PredictTheWinner(vector<int>& nums) {
        if (nums.size()==0)
        {
            return true;
        }
        else if (nums.size()==1)
        {
            return true;
        }else{
        bool result=countScore(nums,0,0,true);
        return result;
        }        
        
        
    }
};

int main(){
    Solution s;
    vector<int> v={1,5,233,7};
    cout<<"Winner ? "<<s.PredictTheWinner(v)<<endl;
    return 0;
}
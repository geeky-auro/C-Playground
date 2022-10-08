// https://leetcode.com/problems/climbing-stairs/submissions/
// Best Explanation: https://leetcode.com/problems/climbing-stairs/discuss/2673488/Practical-Solution-(0ms)-and-Mathematical-Solution-(13ms)-or-With-Explanation
#include<iostream>
using namespace std;
int climbStairs(int n) {
    int steps[46]={0};
    
    steps[1]=1;
    steps[2]=2;
    
    for(int i=3;i<=45;i++){
        steps[i]=steps[i-1]+steps[i-2];
    }
    
    return steps[n];
}

int main(){
    cout<<climbStairs(4)<<endl;
    return 0;
}
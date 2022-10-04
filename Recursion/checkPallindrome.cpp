#include <iostream>
#include<cstring>
using namespace std;
bool helper(char c[],int start,int end){
    if(start=end)return true;
    if (c[start]==c[end] && start<end+1)
    {
        return helper(c,start+1,end-1);
    }else if(c[start]!=c[end]){
        return false;
    }
    return true;
    
}
bool checkPalindrome(char input[]) {
    // Write your code here
    if(strlen(input)==0 || strlen(input)==1)
    {
        return true;
    }
    if (input[0]==input[strlen(input)-1])
    {
       bool isHelper= helper(input,0,strlen(input)-1);
        return isHelper;
    }
    else{
        return false;
    }
    
}
int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
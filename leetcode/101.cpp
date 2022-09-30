//https://leetcode.com/problems/longest-common-prefix/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

string smallest(vector <string> arr){
    string small=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    return small;

}

bool icheckSimilar(vector <string> arr){
    bool isSimilar=false;
    for(int i=1;i<arr.size();i++){
        if (arr[i-1]==arr[i])
        {
            isSimilar=true;
        }
        else{
            isSimilar=false;
        }
        
    }
    return isSimilar;
}

void alt(vector <string> &arr){
    bool isflag=false;
    string st_cmn="";
   
    
    for(int i=0;i<smallest(arr).length();i++){
        char ch=smallest(arr).at(i);
        isflag=false;
        for(int k=0;k<arr.size();k++){
            char m=arr[k].at(i);
            if (m==ch)
            {
                /* code */
                isflag=true;
                continue;
            }
            else{
                isflag=false;
                break;
            }
        }
        if (isflag)
        {
          st_cmn=st_cmn+ch;
          continue;
        }
        else{
            break;
        }
        
        
    }
    cout<<st_cmn<<endl;
}

int main(){
     vector <string> str={""};
    alt(str);
    return 0;
}

/*
Baseless
int l=str[0].length();
    string st_cmn="";
    for(int i=0;i<str.size();i++){
        for(int k=0;k<str[i].size() && k<str.size();k++){
            char ch=str[i].at(k);
         bool isthere=false;
        for (int j = 0; j<smallest(str).length(); j++)
        {
           
            if (ch==str[j].at(i))
            {
                isthere=true;
                continue;
                /* code */
      /*      }
            else{
                isthere=false;
                break;
            }
        }
        if(isthere){
            st_cmn=st_cmn+ch;
        }
        }
                
    }
    cout<<st_cmn<<endl;
    cout<<"DOne"<<endl;
*/
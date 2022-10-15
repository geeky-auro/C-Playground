#include<iostream>
using namespace std;

string skipApple(string st,string output){
    if (st.empty())
    {
        return "";
    }
    // apple
    // 01234
    if (st.rfind("apple")!=-1)
    {
        return skipApple(st.substr(st.rfind("apple"),4),output);
    }       
        return st[0]+skipApple(st.substr(1),output);


    
    
}

int main(){
    string st="maappleilk";
    string output="";

    
    cout<<skipApple(st,output);


    return 0;
}
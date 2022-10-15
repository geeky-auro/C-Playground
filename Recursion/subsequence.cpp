#include<iostream>
using namespace std;
int subseq(string input,string *output){
    if (input.empty())
    {
        output[0]=" ";
        return 1;
    }
    string smallCalc=input.substr(1);
    int smallOpt=subseq(smallCalc,output);
    cout<<smallOpt<<endl;
    for(int i=0;i<smallOpt;i++){
        output[i+smallOpt]=input[0]+output[i];
    }
    return 2*smallOpt;


}
int main(){
    string st;
    cin>>st;
    string *output=new string[1000];
    int count=subseq(st,output);
    cout<<count<<endl;
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}

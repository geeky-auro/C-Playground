#include <iostream>
#include <string>
using namespace std;

string alphas(int no){
    string st;
    switch (no)
    {
    case 0:{
        st=" ";
        break;
    } 
    case 1:{
        st=" ";
        break;
    }
    case 2:{
        st="abc";
        break;
    }    
    case 3:{
        st="def";
        break;
    }
    case 4:{
        st="ghi";
        break;
    }
    case 5:{
        st="jkl";
        break;
    }
    case 6:{
        st="mno";
        break;
    }
    case 7:{
        st="pqrs";
        break;
    }
    case 8:{
        st="tuv";
        break;
    }
    case 9:{
        st="wxyz";
        break;
    }
    default:
        st=" ";
        break;
    }
    return st;
}
/*
int keypad(int num, string output[]){
   
   if (num==0)
   {
    output[0]=" ";
    return 1;
   }
   int dig=num%10;
   num=num/10;
    // 23
   int smallCalc=keypad(num,output);
    string st=alphas(dig);
    string temp[st.size()*smallCalc];
    for(int i=0,k=0;i<smallCalc;i++){
       for (int j = 0; j < st.size(); j++)
       {
       temp[k++]=st[i]+output[j];
       }
    }
    cout<<"printing Temp String"<<endl;
    for (int i = 0; i < st.size()*smallCalc; i++)
    {
        cout<<temp[i]<<endl;
    }
    
    return smallCalc*st.size();
    }

*/
/*
Another Approach
*/
/*
int keypad(int num, string output[]){
    string input;
    if(num == 0){
        output[0] = "";
        return 1;
    }
    
        int n = num%10;
        num = num/10;
        int smalloutputsize = keypad(num, output);
        switch(n){
            case 2: input = "abc";
                break;
            case 3: input = "def";
                break;
            case 4: input = "ghi";
                break;
            case 5: input = "jkl";
                break;
            case 6: input = "mno";
                break;
            case 7: input = "pqrs";
                break;
            case 8: input = "tuv";
                break;
            case 9: input = "wxyz";
                break;
               
    }
    int ans_size=smalloutputsize*(input.size());
    string temp[ans_size];
    int k=0;
    for(int i=0; i<smalloutputsize; i++){
        for(int j=0; j<input.size(); j++){
            temp[k] = output[i]+input[j];
            k++;
        }
        
    }
    for(int i=0; i<ans_size; i++){
        output[i] = temp[i];
    }
    return input.size()*smalloutputsize;
}

*/

int keypad(int input,string output[]){
    if (input==0)
    {
    output[0]=" ";
    return 1;
    }
    
    int lastDigit=input%10;
    int smallNumber=input/10;

    int smallOutputSize=keypad(smallNumber,output);
    string choice=alphas(lastDigit);
    // TO Make No. of Copies..!
    for (int i = 0; i < choice.length();i++)
    {
        for(int j=0;j<smallOutputSize;j++){
            output[j+(i+1)*smallOutputSize]=output[j];
        }
    }
    int k=0;
    for(int i=0;i<choice.length();i++){
        for(int j=0;j<smallOutputSize;j++){
            output[k]=output[k]+choice[i];
            k++;
        }
    }
    return smallOutputSize*choice.length();
   
}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

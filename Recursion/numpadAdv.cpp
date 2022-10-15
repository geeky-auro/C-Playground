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
void printK(int num,string output){
    if (num==0)
    {
        cout<<output<<endl;
        return;
    }
    string choice=alphas(num%10);
    for (int i = 0; i < choice.size(); i++)
    {
        printK(num/10,choice[i]+output);
    }
    
    
}

void printKeypad(int num){
    printK(num," ");
}

int main(){
    int num;
    // cin >> num;

    printKeypad(23);

    return 0;
}

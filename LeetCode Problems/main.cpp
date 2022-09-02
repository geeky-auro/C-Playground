#include <iostream>
#include <cstring>
using namespace std;

void romantoInt(string st){
    int sum=0;
    for(int i=0;i<st.length();i++){
        char ch=st.at(i);
        if(i!=st.length()-1){
            char next=st.at(i+1);
            switch(ch){
            case 'V':{
                if(next=='X' || next=='L' || next=='C' || next=='D' || next=='M'){
                    sum=sum-5;
                }else{
                sum=sum+5;
                }
                break;
            }
            case 'I':{
            if(next=='V' || next=='X' || next=='L' || next=='C' || next=='D' || next=='M'){
                sum=sum-1;
            }else{
                sum=sum+1;
            }
            break;
            }
            case 'X':{
            if(next=='L' || next=='C' || next=='D' || next=='M'){
                sum=sum-10;
            }else{
                sum=sum+10;
            }
            break;
            }
            case 'L':{
            if(next=='C' || next=='D' || next=='M'){
                sum=sum-50;
            }else{
                sum=sum+50;
            }
            break;
            }
            case 'C':{
            if(next=='D' || next=='M'){
                sum=sum-100;
            }
            else{
                sum=sum+100;
            }
            break;
            }
            case 'D':{
            if(next=='M'){
                sum=sum-500;
            }else{
                sum=sum+500;
            }
            break;
            }
            default:{
            sum=sum+1000;
            }
        }
        }
        else{
                switch(ch){
                case 'I':{ sum=sum+1; break;}
                case 'V':{ sum=sum+5; break;}
                case 'X':{ sum=sum+10; break;}
                case 'L':{ sum=sum+50; break;}
                case 'C':{ sum=sum+100; break;}
                case 'D':{ sum=sum+500; break;}
                default:{ sum=sum+1000; }
            }
        }
    }
    cout<<sum;
}

int main()
{
   string st;
   cin>>st;
   romantoInt(st);
    return 0;
}

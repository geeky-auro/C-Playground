#include<iostream>
using namespace std;
int length(char ch[]){
    if (ch[0]=='\0')
    {
        return 0;
    }
    int ans=length(ch+1);
    return ans+1;
    
}

void removeX(char ch[]){
    if (ch[0]=='\0')
    {
        return;
    }
    if (ch[0]!='X')
    {
        removeX(ch+1);
    }
    else{
        int i=1;
        for (; ch[i]!='\0'; i++)
        {
            ch[i-1]=ch[i];
        }
        ch[i-1]=ch[i];
        removeX(ch);
    }
    
    
}
int main(){
    char ch[]="AUROX";
    int l=length(ch);
    cout<<"Length of the String is "<<l<<endl;
    removeX(ch);
    l=length(ch);
    cout<<"Length of the String is "<<l<<endl;
    return 0;
}
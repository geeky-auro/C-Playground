#include <iostream>

using namespace std;

void length(char *ch){
int i=0,counter=0;
while(ch[i]!='\0'){
        i++;
    }
    cout<<"Length of the String is :"<<i<<endl;
}

void trimSpaces(char ch[]) {
    // Write your code here
        int i=0,t=0;
    while(ch[i]!='\n'){
        if(ch[i]==' '){
            i++;
            continue;
        }
    ch[t++]=ch[i++];
    }

}

int main()
{
    char ch[1000];
    //cin>>ch;
    cin.getline(ch,1000,'\n');
    trimSpaces(ch);
    return 0;
}

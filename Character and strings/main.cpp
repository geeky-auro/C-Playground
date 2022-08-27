#include <iostream>

using namespace std;

void length(char *ch){
int i=0,counter=0;
while(ch[i]!='\0'){
        i++;
    }
    cout<<"Length of the String is :"<<i<<endl;
}

int main()
{
    char ch[10];
    cin>>ch;
    length(ch);
    return 0;
}

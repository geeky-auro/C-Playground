#include <iostream>
#include <cstring>
using namespace std;
// Change in the given string itself. So no need to return or print anything
void shift(char input[]){
int i=strlen(input)-1;
while (i>=0)
{
    input[i+2]=input[i];
    i--;
}
input[0]='1';
input[1]='4';

}
void replacePi(char input[]) {
	// Write your code here
    string str="3.14";
    if (strlen(input)==0 || strlen(input)==1)
    {
        return;
    }
    if(input[0]=='p' && input[1]=='i'){
        input[0]='3';
        input[1]='.';
        shift(input+2);
    }
    replacePi(input+1);
    
}
int catchSTring(char ch[]){
 cout<<ch[0]<<ch[1]<<endl;
    return 0;
}
int main() {
    char input[10000]="pippiippip";
    //cin.getline(input, 10000);
    replacePi(input);
    // catchSTring(input+1);
    cout << input << endl;
}
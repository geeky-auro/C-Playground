#include <iostream>
#include <cstring>
using namespace std;


void removeX(char input[]){
    if(input[0]=='\0'){
        return;
    }
    removeX(input+1);
    if (input[0]=='x')
    {
        /* char* strcpy(char* dest, const char* src); */
        strcpy(input, input+1);
    }
    
}

int main() {
    char input[100]="pxxp";
    cout<<"Original "<<input<<endl;
    // cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}

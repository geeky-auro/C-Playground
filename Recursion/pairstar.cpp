#include <iostream>
#include <cstring>
using namespace std;
// Change in the given string itself. So no need to return or print the changed string.
void shift(char input[]){
    int i=strlen(input);
    while (i>=0)
    {
        /* code */
        input[i+1]=input[i];
        i--;
    }
    input[0]='*';
    
}
void pairStar(char input[]) {
    // Write your code here
if (input[0]=='\0')
{
    return;
}
    if(input[0]==input[1]){
        shift(input+1);
    }
    pairStar(input+1);
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}

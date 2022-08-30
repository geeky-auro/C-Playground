#include <iostream>
#include <cstring>
#include <climits>

using namespace std;
/*
Use Frequency Arrays
*/

bool isPermutation(char str1[],char str2[]){
    if(strlen(str1)!=strlen(str2)){
        return false;
    }
  int *count=new int[256];
  for(int i=0;i<256;i++){
    count[i]=0;
  }

  for(int i=0;i<strlen(str1);i++){
    int freqIndex=(int)str1[i];
    count[freqIndex]++;
  }
  for(int i=0;i<strlen(str2);i++){
      int freqIndex=(int)str1[i];
      count[freqIndex]--;
      if(count[freqIndex]<0){
        return false;
      }
  }
  return true;

}
int main()
{
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
    return 0;
}

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


void removeConsecutiveDuplicates(char input[]){

    int i=1,j=1;
    char lastCharacter=input[0];
    while(input[i]!='\0'){
        if(input[i]==lastCharacter){
            i++;
            continue;
        }else{
        input[j]=input[i];
        lastCharacter=input[j];
        j++;
        }
        i++;
    }
    input[j]='\0';
    cout<<input;

}

void reverseEachWord(char input[]) {
    // Write your code here
    int i=0,init=0;
    while(i<strlen(input)){
        if(input[i]==' '){
            int k=i-1;
            while(init<=k){
                char temp=input[init];
                input[init]=input[k];
                input[k]=temp;
                k--;
                init++;
            }
            init=i+1;
            i++;
            continue;
        }

        if(i==strlen(input)-1){
            int k=i;
            while(init<=k){
                char temp=input[k];
                input[k]=input[init];
                input[init]=temp;
                init++;
                k--;
            }
        }
        i++;
    }

}


void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int i=0;
    while(i<strlen(input)){
        if(input[i]==c){
            int j=i;
            while(j<strlen(input)-1){
                input[j]=input[j+1];
                j++;
            }
            input[j]='\0';
            continue;
        }
        i++;
    }
}

char highestOccurringChar(char input[]) {
    int *count=new int[256];
    for(int i=0;i<256;i++){
        count[i]=0;
    }
    for(int j=0;j<strlen(input);j++){
        int freqIndex=(int) input[j];
        count[freqIndex]++;
    }
    int maxFreq=0;
    char maxFreqChar;
    for(int k=97;k<=122;k++){
        if(count[k]>maxFreq){
            maxFreq=count[k];
            maxFreqChar=(char)k;
        }
    }
    return maxFreqChar;

}


int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
    return 0;
}

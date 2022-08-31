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

/*void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    int *count=new int[256];
    for(int i=0;i<256;i++){
        count[i]=0;
    }

    for(int k=0;k<strlen(input);k++){
        int freqIndex=(int)input[k];
        count[freqIndex]++;
    }
    for(int i=0;i<strlen(input);i++){
        input[i]='\0';
    }
    int sizeCount=0;
    for(int j=95,i=0;j<123 && i<strlen(input);j++,i++){
        if(count[j]>0){
                sizeCount++;
           //cout<<(char)j;
        }
    }
    char *arr=new char[sizeCount];
    int i=0,j=95;
    while(i<sizeCount && j<123){
        if(count[j++]>0){
            arr[i++]=count[j];
        }
    }
    strcpy(input,arr);
    cout<<input;

}

*/
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


int main()
{
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
    return 0;
}

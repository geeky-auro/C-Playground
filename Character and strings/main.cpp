#include <iostream>

using namespace std;

int length(char *ch){
int i=0,counter=0;
while(ch[i]!='\0'){
        i++;
    }
    return i;
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

void printArray(char ch[]){
    cout<<ch;
}

int countSpaces(char ch[]){
int i=0;
 int spaceCount=0;
while(ch[i]!='\0'){
        if(ch[i]==' '){
            spaceCount++;
        }
    i++;
}
return spaceCount;
}

void reverseStringWordWise(char input[]) {
    // Write your code here
    int spaceCount=0;
    spaceCount=countSpaces(input);
    if(spaceCount==0){
        return;
    }
    for(int i=0,end=length(input)-1;i<length(input) && i<end;i++,end--){
            char temp=input[i];
            input[i]=input[end];
            input[end]=temp;

    }
    int i=0,start=0,end=0;
    int ispaceCount=0;
    while(i<length(input)){
        if(input[i]==' '){
            end=i-1;
            while(start<end){
                char temp=input[start];
                input[start]=input[end];
                input[end]=temp;
                start++;
                end--;
            }
            start=i+1;
            ispaceCount++;
        }
        if(ispaceCount==spaceCount){
           break;
        }
        i++;
    }
    start=i+1;
        for(int i=start,end=length(input)-1;i<length(input) && i<end;i++,end--){
            char temp=input[i];
            input[i]=input[end];
            input[end]=temp;

    }
}

void printAllSubstrings(char ch[]){

    /*
    a
    ab
    abc
    b
    bc
    c
    */
    for(int i=0;ch[i]!='\0';i++){
            for(int k=i;ch[k]!='\0';k++){
            for(int j=i;j<=k;j++){
            cout<<ch[j];
            }
               cout<<endl;
        }


    }

}

int main()
{
    char ch[1000];
    //cin>>ch;
    cin.getline(ch,1000,'\n');
    //reverseStringWordWise(ch);
    printAllSubstrings(ch);
    return 0;
}

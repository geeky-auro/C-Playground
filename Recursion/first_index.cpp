#include<iostream>

using namespace std;


int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
 if(size==0){
    cout<<"A1 executed successfully"<<endl;
    return -1;
 }
 if(input[0]==x){
    cout<<"A2 executed successfully"<<endl;
    return 1;
 }
 cout<<"A3 executed successfully"<<endl;
 int ans = firstIndex(input+1,size-1,x);
 cout<<"After 1st Termination value of ANS is "<<ans<<endl;
 if(ans!=-1){
    cout<<"A4 executed successfully"<<endl;
    cout<<"Valur in Ans "<<ans<<endl;
    return ans+1;
 }
 else{
    cout<<"A5 executed successfully"<<endl;
    return ans;
 }
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << firstIndex(input, n, x) << endl;

}



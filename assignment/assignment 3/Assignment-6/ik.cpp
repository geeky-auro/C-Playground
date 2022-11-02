#include<iostream>
using namespace std;

// char * allocateMemory();
inline void kit(){
  cout<<"Hello:";
}

int main()
{
  int num[]={1,2,3,4,5,6};
  cout<<2[num]<<endl;
  num[1]==1[num]?cout<<"Success \n" : cout<<"Error \n";
  int *ptr=nullptr;
  delete ptr;
  *ptr=5;
  // cout<<allocateMemory()<<endl;
  kit();
  return 1;
}
// char * allocateMemory(){
//   char *str="Memory Allocation";
//   return str;
// }
#include <iostream>
#include <string.h>
#include <stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
//   char name[50];
//   char he[69];
  int *name=nullptr;
  for (int i = 0; i < 5; i++)
  {
   name+i=new int;
   cin>>*(name+i);
  }
  
//   gets(name);
//    gets(he);
//    puts(name);
//    puts(he);
   return 0;
}
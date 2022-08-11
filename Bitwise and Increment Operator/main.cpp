#include<iostream>
using namespace std;

int main(){

int a=15,b=30;

int ror=a|b;
int rand=a&b;
int rnot_a=~a;
int rnot_b=~b;
int rxor=a^b;
int rls=a<<3;
/*   a*2^3   */
int rrs=a>>3;
/*   a/2^3 --->will represent whole number integer    */


/* 15-->000.....10001       |
   30-->000.....11110       |
----------------------------|
*/

cout<<ror<<endl;
cout<<rand<<endl;
cout<<rnot_a<<endl;
cout<<rnot_b<<endl;
cout<<rxor<<endl;
cout<<rls<<endl;  /*    *2^no_bits_to_be_shifted    */
cout<<rrs<<endl;  /*    /2^no_bits_to_be_shifted      */

 int x, y = 1;
         x = 10;
         if (x != 10 && x / 0 == 0)
            cout << y;
         else
             cout << ++y;

/*
NOte in && if 1st condition becomes false then it wont go to check for next condition
     in || if 1st condition becomes false then also it will check for 2nd condition i.e it will check for all condition..!
*/
x = 10;
y = 20;
    if(x++ > 10 && ++y > 20 ){
    cout << "Inside if ";
    } else{
    cout << "Inside else ";
    }
    cout << x << " " << y;
}

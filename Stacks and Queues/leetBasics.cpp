#include<iostream>
using namespace std;
string fractionToDecimal(int numerator, int denominator) {
     if (numerator==0)
     {
        return "0";
     }
     if (numerator%denominator==0)
     {
        return to_string(numerator/denominator);
     }
     string str1="";
     int num=numerator;
     int count=0;
     while (num>=denominator)
     {
        count++;
        num=num-denominator;
     }
     int quotient=count;
     int rem=num;
    //  Use case if--> reminder!=0
    if (rem!=0)
    {
        str1=to_string(quotient);
        str1=str1+".";
    }
    // after Decimal
     int beforeDecQou=quotient;
     int beforeDecRem=num*10;
     count=0;
     if (denominator<beforeDecRem)
     {
        beforeDecRem=beforeDecRem*10;
        str1=str1+"0";
     }   
    }
int main()
{
    
    return 0;
}
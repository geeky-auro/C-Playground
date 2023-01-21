#include<iostream>
using namespace std;
#include <string.h>
#include <stack>

bool isBalanced(string expression) 
{
    // Write your code here
    if (expression[0]==')')
    {
        return false;
    }
    
    stack<char> s;
    for (size_t i = 0; i < expression.size(); i++)
    {
        /* code */
        if (expression[i]=='(')
        {
            s.push(expression[i]);
        }
        if(!s.empty() && expression[i]==')'){
            s.pop();
        }
    }
    if (s.empty())
    {
        /* code */
        return true;
    }else{
        return false;
    }
}

int main()
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
    return 0;
}
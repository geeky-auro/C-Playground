#include<iostream>
using namespace std;

int main(){


/*cin.get() is used for accessing character array. It includes white space characters. Generally,
cin with an extraction operator (>>) terminates when whitespace is found. However, cin.get() reads a string with the whitespace.

Decalration Syntax: cin.get(string_name, size);
*/
char c=cin.get();
printf("%c",c);


/*
Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and
white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).
*/

/*
Input Format :
A stream of characters terminated by '$'
Output Format :
3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)
Sample Input :
abc def4 5$
Sample Output :
6 2 2
Sample Output Explanation :
Number of characters : 6 (a, b, c, d, e, f)
Number of digits : 2 (4, 5)
Number of white spaces : 2 (one space after abc and one newline after 4)

Solution: https://gist.github.com/geeky-auro/37dcc6df57abfaf5ac4983886b46715c
*/


return 0;


}

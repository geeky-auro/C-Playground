#include <bits/stdc++.h>
using namespace std;

int length(char ch[]){
	int i=0;
	while(ch[i]!='\0'){
		i++;
	}
	return i;
}

bool checkpalindrome(char ch[]){
	bool ispalin=false;
	for (int i = 0,end=length(ch)-1; i < length(ch) && i<end; ++i)
	{
		if (ch[i]==ch[end--])
		{
			ispalin=true;
			/* code */
		}else{
			ispalin=false;
		}
	}
	return ispalin;
}

int main(int argc, char const *argv[])
{
	char ch[100];
	cin>>ch;
	cout<<checkpalindrome(ch);
	return 0;
}
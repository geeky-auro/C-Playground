#include<iostream>
using namespace std;
class String
{
private:
 string word;
 int length;
public:
    void concatenate(string requiredWord);
    String(string word);
    ~String();
};
void String::concatenate(string requiredWord){
    requiredWord=word+requiredWord;
    cout<<"Concatenated String is "<<requiredWord<<endl;
}

String::String(string word)
{
    this->word=word;
    length=word.length();
    cout<<"Length of the String is "<<length<<endl;
}

String::~String()
{
    cout<<"Destructor has been Invoked \n";
}

int main()
{
    String s1("AURO"),s2("Hello");
    s1.concatenate(" Hey");
    s2.concatenate(" Saswat");
    return 0;
}
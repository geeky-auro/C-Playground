#include<iostream>
using namespace std;

class bookie
{
private:
    string author_name,book_name;
    int price;
public:
    void input();
    friend void display(bookie *b,int size);
};

void bookie::input(){
    cout<<"Enter Author Name"<<endl;
    getline(cin>>ws,author_name);
    cout<<"Enter Book Name"<<endl;
    getline(cin>>ws,book_name);
    cout<<"Price"<<endl;
    cin>>price;
}

void display(bookie *b,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<"Book Name:"<<(b+i)->book_name<<endl;
        cout<<"Author Name:"<<(b+i)->author_name<<endl;
        cout<<"Price:"<<(b+i)->price<<endl;
    }
    
}

int main(){
    cout<<"Enter No. of Books"<<endl;
    int n;
    cin>>n;
    bookie *b=new bookie[n];
    for (int i = 0; i < n; i++)
    {
        b[i].input();
    }
    display(b,n);
    
    return 0;
}
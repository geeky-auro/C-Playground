// Create two classes which stores distance in feet,
// inches and meter, centimeter format respectively. Write
// a function which compares distance in object of these
// classes and display the larger one

#include<iostream>
using namespace std;
    // Class Defn
    class obj1;
    class obj2;
    class obj1
    {
    private:
        int ft,in;
    public:
    int fti;
        obj1(int ft,int in);
        friend void compare(obj1 &ob1,obj2 &obj2);
    };
    
    obj1::obj1(int ft,int in)
    {
        this->ft=ft;
        this->in=in;
    }
    


    class obj2
    {
    private:
        int m,cm;
    public:
        obj2(int m,int cm);
         friend void compare(obj1 &ob1,obj2 &obj2);
    };
    
    obj2::obj2(int m,int cm)
    {
        this->m=m;
        this->cm=cm;
    }

    
 void compare(obj1 &ob1,obj2 &ob2){
    int ft=ob1.ft;
    int in=ob1.in;
    in=in+ft*12;

    // meter to cm
    int cm=ob2.cm+ob2.m*100;
    // 1cm=0.3937 in
    if (in>cm*0.3937)
    {
        cout<<ob1.ft<<"Foot "<<ob1.in<<" Inches"<<endl;
    }else{
        cout<<ob2.m<<" Meter "<<ob2.cm<<" cm"<<endl;
    }
        
 }   

static void solve(){
    obj1 objii(6,54);
    objii.fti=64;
cout<<"Enter Foot and Inches Separated by a single Space"<<endl;
int ft,in;
cin>>ft>>in;
cout<<"Enter m and cm Separated by a Single Space"<<endl;
int m,cm;
cin>>m>>cm;
obj1 ob1(ft,in);
obj2 ob2(m,cm);
compare (ob1,ob2);
}

int main(){
    solve();
    return 0;
}
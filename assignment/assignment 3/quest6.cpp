#include <iostream>
using namespace std;
class s{
    public:
    inline float Square(int n){return (n*n);}
    inline float Cube(int n){return (n*n*n);}
};

int main(){
    s s;
int n;
cout << "Enter a number : ";
cin>>n;
cout << "Square of "<<n<<" is "<<s.Square(n);
cout << "\nCube of "<<n<<" is "<<s.Cube(n);
return 0;
}
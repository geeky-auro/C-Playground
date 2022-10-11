#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
// (n-1)------:A->B using c
// (nth)------:A->C
// (n-1)------:B->C using a
// 
if (n==0)
{
    /* code */
    return;
}


if (n==1)
{
    cout<<source<< " "<<destination<<endl;
    return;
}
towerOfHanoi(n-1,source,destination,auxiliary);
cout<<source<<" "<<destination<<endl;
towerOfHanoi(n-1,auxiliary,source,destination);
	
}
int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}



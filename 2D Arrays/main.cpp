#include <iostream>

using namespace std;

int main()
{
   int rows,columns;
   cin>>rows>>columns;
   int arr[100][100];

   for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
   }

    /*  To Print Elements Column Wise        */
    cout<<"To Print Elements Column-Wise"<<endl;
   for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        cout<<arr[i][j]<<'\t';
    }
     cout<<endl;
    cout<<"------------------------";
     cout<<endl;
   }
   cout<<"To Print Elements Row-Wise"<<endl;
   for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        cout<<arr[j][i]<<'\t';
    }
     cout<<endl;
    cout<<"------------------------";
     cout<<endl;
   }

    cout<<"To Print Elements Row-Wise Manner"<<endl;
    for(int i=0;i<columns;i++){
    for(int j=0;j<rows;j++){
        cout<<arr[i][j]<<'\t';
    }
     cout<<endl;
    cout<<"------------------------";
     cout<<endl;
   }



    return 0;
}

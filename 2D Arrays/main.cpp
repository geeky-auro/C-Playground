#include <iostream>
#include <climits>

using namespace std;

void printArray(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}


void columnWiseSum(int arr[][100],int rows,int columns){

    cout<<"------------------------"<<endl;
    cout<<"Sum is;-"<<endl;
   /*   4X2    */
   if(rows==0 && columns==0){
    cout<<0;
   }
   for(int i=0;i<columns;i++){
        int sum=0;
    for(int j=0;j<rows;j++){
        sum=sum+arr[j][i];
    }
    cout<<sum<<" ";
   }
 cout<<"------------------------"<<endl;


}

void previousPrintedSolved(int arr[][100],int rows,int columns){

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
}

/*
You can use minimum value of integer as -2147483647 and
maximum value of integer as 2147483647
*/
void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
        bool isRow=false;
        int max_sum=INT_MIN;
        int index=0;

        for(int i=0;i<nRows;i++){
                int presentSum=0;
            for(int j=0;j<mCols;j++){
                 presentSum=presentSum+input[i][j];
                }
                if(presentSum>max_sum){
                    max_sum=presentSum;
                    index=i;
                    isRow=true;
            }
        }

        for(int i=0;i<mCols;i++){
                 int presentSum=0;
            for(int j=0;j<nRows;j++){
                presentSum=presentSum+input[j][i];
            }
            if(presentSum>max_sum){
                max_sum=presentSum;
                index=i;
                isRow=false;
            }
        }
        if(isRow){
            cout<<"Row "<<index<<" "<<max_sum;
        }
        else{
            cout<<"Column "<<index<<" "<<max_sum;
        }




}

int main()
{

  printf("Enter Rows and Columns ;) \n");
  int rows,columns;
  cin>>rows>>columns;
  int **arr=new int*[100];
  for(int i=0;i<rows;i++){
        arr[i]=new int[100];
    for(int j=0;j<columns;j++){
        cin>>arr[i][j];
    }
  }

  findLargest(arr,rows,columns);
//  printArray(arr,rows,columns);




    return 0;
}

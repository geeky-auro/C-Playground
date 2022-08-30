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

/** \brief
 *
 * \param
 * \param
 * \return
 *  10 20 30
    40 50 60
    70 80 90

    10 40 70 80 50 20 30 60 90
 */

void wavePrint(int **input, int nRows, int mCols)
{
    //Write your code here
    for(int i=0;i<mCols;i++){
        if(i%2==0){
        for(int j=0;j<nRows;j++){
            cout<<input[j][i]<<" ";
        }
    }
        else{
             for(int j=nRows-1;j>=0;j--){
                cout<<input[j][i]<<" ";
            }
            }
    }
}

void spiralPrint(int **input, int nRows, int nCols)
{

    if(nRows==1 && nCols==1){
        cout<<input[0][0];
        return;
    }

    if(nRows==1 && nCols==0){
        for(int i=0;i<nCols;i++){
            cout<<input[0][i]<<" ";
        }
        return;
    }
    if(nCols==1 && nRows==0){
         for(int i=0;i<nRows;i++){
            cout<<input[i][0]<<" ";
        }
        return;
    }
    int s_row=0,e_row=nRows-1,s_column=0,e_column=nCols-1;
    while(s_row<e_row && s_column<e_column){
        int j=s_column;
    while(j<=e_column){
        cout<<input[s_row][j]<<" ";
        j++;
    }
    s_row++;
    int k=s_row;
    while(k<=e_row){
        cout<<input[k][e_column]<<" ";
        k++;
    }
    e_column--;
    int l=e_column;
    while(l>=s_column){
        cout<<input[e_row][l]<<" ";
        l--;
    }
    e_row--;
    int m=e_row;
    while(m>=s_row){
        cout<<input[m][s_column]<<" ";
        m--;
    }
    s_column++;
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
  spiralPrint(arr,rows,columns);
//wavePrint(arr,rows,columns);

  //findLargest(arr,rows,columns);
//  printArray(arr,rows,columns);




    return 0;
}

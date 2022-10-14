#include<iostream>
using namespace std;
// Matrix Multiplication
void matrixmul(int arr[][3],int arr1[][3]){
    int output[3][3];
    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < 3; i++)
    {   int sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum=sum+arr[k][j]*arr1[j][i];
            // sum=sum+ 
        }
        output[k][i]=sum;
    }
    }
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int arr1[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    matrixmul(arr,arr1);
    return 0;
}
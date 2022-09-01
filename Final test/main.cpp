#include <iostream>
#include <climits>
#include <cstring>
using namespace std;


void print2DArray(int **input, int row, int col) {
	// Write your code here
	int counter=row;

        for(int i=0;i<row && counter>=1;i++,counter--){
            int k=0;
            while(k<counter){
                for(int j=0;j<col;j++){
                cout<<input[i][j]<<" ";
            }
                cout<<endl;
                k++;
            }

        }

}

/* input - Input String
*  output - Save the result in the output array (passed as argument). You don’t have to
*  print or return the result
*/
void minLengthWord(char input[], char output[]){

	// Write your code here
	int w=strlen(input);
	input[w]=' ';
	int i=0,init=0,minLen=INT_MAX;
	int count=0;

	while(input[i]!='\n'){
        if(input[i]==' '){
            int last=i-1;
            count=0;
            while(last>=init){
                count++;
                last--;
            }
            last=i-1;
            if(count<minLen){
            minLen=count;
            int l=0;
            while(init<=last && l<count){
                output[l]=input[init];
                l++;
                init++;
            }
            output[l]='\0';
        }
        init=i+1;
      }
        i++;
	}

}

void Leaders(int* arr,int len)
{
	/* Don't write main().
	 * Don't read input, it is passed as function argument.
	 * Print your output exactly in the same format as shown.
	 * Don't print any extra line.
	*/
for(int i=0;i<len;i++){
        bool isbig=true;
    for(int j=i+1;j<len;j++){
        if(!(arr[i]>=arr[j])){
            isbig=false;
            break;
        }
        else{
            isbig=true;
            continue;
        }
    }
    if(isbig){
        cout<<arr[i]<<" ";
    }
}
}

int main()
{
    /*
    int row, col;
    cin >> row >> col;

    int **input = new int*[row];
    for(int i = 0; i < row; i++) {
	    input[i] = new int[col];
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    print2DArray(input, row, col);
    */
   /*   char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
  */
      int len;
    cin>>len;
	int *arr = new int[len + 1];

	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}
int main(){
    FILE *input,*output;
    input=fopen("input.dat","r");
    if(input==NULL){
        perror("Error in File Opening");
        return -1;
    }

    output=fopen("output.dat","w");
    if(output==NULL){
        perror("Error in opening the file ");
        return -1;
    }
    int no=0;
    int count_no=1;
    int no_1=0,no_2=0;
    while(fscanf(input,"%d",&no)==1){
        if((count_no)%2==1){
            no_1=no;
        }
        else if((count_no)%2==0)
        no_2=no;

        if(count_no!=0 && count_no%2==0){
            fprintf(output,"%d \n",hcf(no_1,no_2));
            count_no=1;
        }
        count_no++;
        
    }

    fclose(input);
    fclose(output);

    return 0;
}
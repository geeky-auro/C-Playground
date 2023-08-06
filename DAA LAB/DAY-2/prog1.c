#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int powi(int n,int m){
    int ans=1;
    for(int i=1;i<=m;i++){
        ans=ans*n;
    }
    return ans;
}

int dec_to_bin(int no){
    int rem=0,dig=0,count=0;
    while(no>=1){
        rem=no%2;
        dig=dig+powi(10,count++)*rem;
        no=no/2;
    }
    return dig;
}

int main(){
    
    FILE* inputFile,*outputFile;
    double number;
    char ch;
    
    inputFile = fopen("input.dat","r");
    if(inputFile==NULL){
        perror("Error in Opening the File");
        return 1;
    }

    // Open the Output FIle for Writing
    outputFile=fopen("output.dat","w");
    if(outputFile==NULL){
        perror("Error opening the output file");
        fclose(inputFile);
        return 1;
    }


    while(fscanf(inputFile,"%lf",&number)==1){
        // Write your function to compute on numbers
        // solve()

        fprintf(outputFile,"%.32d\n",dec_to_bin(number));
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Computation COmpleted");
    return 0;
}
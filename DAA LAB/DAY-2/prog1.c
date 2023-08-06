#include<stdio.h>
#include<stdlib.h>

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

        fprintf(outputFile,"%.2lf\n",result);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Computation COmpleted");
    return 0;
}
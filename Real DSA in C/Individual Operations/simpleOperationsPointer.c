 #include<stdio.h>
 #include<stdlib.h>

void pointerOps(int **temp){
printf("%d",(**temp+1));
(**temp)++;
}

 int main(){
    int p=10;
    int *x=&p;
    pointerOps(&x);
    pointerOps(&x);
    pointerOps(&x);
    pointerOps(&x);
    return 0;
 }
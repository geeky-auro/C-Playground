#include<stdlib.h>
#include<stdio.h>

void swap(int *a, int *b) {
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main(int charc,int *charv[]){
    int dig1=atoi(charv[1]);
    int dig2=atoi(charv[2]);
    printf("Before Swapping a=%d,b=%d \n",dig1,dig2);
    swap(&dig1,&dig2);
    printf("After Swapping a=%d,b=%d \n",dig1,dig2);
    return 0;
}
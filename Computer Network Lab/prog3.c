#include<stdio.h>

int main(){
    int a=258;
    char *c=(char *)&a;
    printf("First Byte of the Number %d \n",*c);
    printf("Second Byte of the Number %d \n",*(c+1));
    printf("Third Byte of the Number %d \n",*(c+2));
    printf("Fourth Byte of the Number %d \n",*(c+3));
    return 0;
}
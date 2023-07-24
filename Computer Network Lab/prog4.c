#include<stdio.h>

struct pkt{
	char ch1;
    char ch2[2];
	char ch3;
};

int main(int charc,int *charv[]){
    struct pkt p;
    int a=258;
    printf("The Input Number is %d \n",a);
    char *c=(char *)&a;
    printf("First Byte of the Number %d \n",*c);
    printf("Second Byte of the Number %d \n",*(c+1));
    printf("Third Byte of the Number %d \n",*(c+2));
    printf("Fourth Byte of the Number %d \n",*(c+3));    
    p.ch1=*c;
    p.ch2[0]=a>>8;
    p.ch2[1]=a>>16;
    p.ch3=a>>24;
    printf("1st Member of the Structure=%d",p.ch1);
    printf("\n2nd Member of the Structure=%d,%d",p.ch2[0],p.ch2[1]);
    printf("\nDigit in 4th byte=%d\n",p.ch3);
    return 0;
}
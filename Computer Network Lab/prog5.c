#include<stdio.h>

void convert_into_Big_Endian(int *a){
    int rem,sum=0;
    while(*a!=0){
        rem=*(a)%10;
        sum=sum*10+rem;
        *(a)=*(a)/10;
    }
    *a=sum;
    printf("The Number is Converted into Big Endian: %d\n",sum);
}

int main(){
    int a=258;
    char *c=(char *)&a;
    char *d=(char *)&a;
    printf("Memory Representation of the Number \n");
    printf("--------------------------------\n");
    printf("Memory Address    ->    Value\n");
    printf("%d      ->      %d\n",(int)c,*c);
    printf("%d      ->      %d\n",(int)c+1,*(c+1));
    printf("%d      ->      %d\n",(int)c+2,*(c+2));
    printf("%d      ->      %d\n",(int)c+3,*(c+3));

    int k=a%10;
    char *e=(char *)&a;
    if(*d==*e) {
        printf("The LSB of the number is stored at the lowest memory address");
        printf("The Host Machine is little endian\n");
        }

        // convert_into_Big_Endian(&a);
        char *f=(char *)&a;
        printf("Memory Representation of the Number \n");
        printf("--------------------------------\n");
        printf("Memory Address    ->    Value\n");
        for(int i=3;i>=0;i--)
        printf("%d      ->      %d\n",(int)(f+i),*(f+i));

    return 0;
}
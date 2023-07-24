#include<stdio.h>
#include<stdlib.h>


struct dob{
    int age;
};

struct student_info{
    int roll_no;
    char name[50];
    float CGPA;
    struct dob age;
};

int main(){
    struct student_info stud1;
    printf("Enter Roll No. of the Student \n");
    scanf("%d",&stud1.roll_no);
    printf("Enter Name of the Student \n");
    scanf("%s",stud1.name);
    printf("Enter CGPA of the Student \n");
    scanf("%f",&stud1.CGPA);
    printf("Enter Age of the Student \n");
    scanf("%d",&stud1.age.age);
    printf("Roll No. of the Student is %d \n",stud1.roll_no);
    printf("Name of the Student is %s \n",stud1.name);
    printf("CGPA of the Student is %.2f \n",stud1.CGPA);
    printf("Age of the Student is %d \n",stud1.age.age);
    return 0;
}
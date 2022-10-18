#include<stdio.h>
int main(){
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

   printf("Enter rows and columns for first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns for Second matrix: ");
    scanf("%d%d",&r2,&c2);

    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1!=r2)
    {
        printf("Error! column of first matrix not equal to row of second.\n");

        printf("Enter rows and columns for first matrix: ");
        scanf("%d%d",&r1,&c1);

        printf("Enter rows and columns for second matrix: \n");
        scanf("%d%d",&r2,&c2);
    }

    // Storing elements of first matrix.
    printf("Enter elements of matrix 1:\n");
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            scanf("%d",&a[i][j]);
        }

    // Storing elements of second matrix.
   printf("Enter Elements in array 2 \n");
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
           
           scanf("%d",&b[i][j]);
        }

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Displaying the multiplication of two matrix.
   printf("Output Matrix :- \n");
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        printf("%d ",mult[i][j]);
        if(j == c2-1)
            printf("\n");
    }

    return 0;
}
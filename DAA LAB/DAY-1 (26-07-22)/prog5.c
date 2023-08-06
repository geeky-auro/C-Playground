#include <stdio.h>

// Function to swap two numbers
void EXCHANGE(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

// Function to rotate the first p2 elements of the array by 1 position to the right
void ROTATE_RIGHT(int A[], int N, int p2) {
    for (int i = 0; i < p2; i++) {
        EXCHANGE(&A[N - 1], &A[N - 2]); // Swap the last and second last elements
        for (int j = N - 2; j >= 1; j--) {
            EXCHANGE(&A[j], &A[j - 1]); // Swap elements to the right
        }
    }
}

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int A[N];
    printf("Enter an array of size %d: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int p2;
    printf("Enter the number of elements to be rotated: ");
    scanf("%d", &p2);

    printf("Before ROTATE:");
    for (int i = 0; i < N; i++) {
        printf(" %d", A[i]);
    }
    printf("\n");

    ROTATE_RIGHT(A, N, p2);

    printf("After ROTATE:");
    for (int i = 0; i < N; i++) {
        printf(" %d", A[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include "matrix.h"

#define N 1000

int main() {
    // Vector dot product
    double *a = (double *)malloc(N * sizeof(double));
    double *b = (double *)malloc(N * sizeof(double));

    for (int i = 0; i < N; i++) {
        a[i] = i * 1.0;
        b[i] = i * 2.0;
    }

    double result = vector_dot(a, b, N);
    printf("Vector dot product result: %f\n", result);

    free(a);
    free(b);

    // Matrix addition
    double **A = (double **)malloc(N * sizeof(double *));
    double **B = (double **)malloc(N * sizeof(double *));
    double **C = (double **)malloc(N * sizeof(double *));
    for (int i = 0; i < N; i++) {
        A[i] = (double *)malloc(N * sizeof(double));
        B[i] = (double *)malloc(N * sizeof(double));
        C[i] = (double *)malloc(N * sizeof(double));
        for (int j = 0; j < N; j++) {
            A[i][j] = i + j;
            B[i][j] = i - j;
        }
    }

    matrix_add(A, B, C, N);
    printf("Matrix addition C[0][0] = %f\n", C[0][0]);
    printf("Matrix addition C[N-1][N-1] = %f\n", C[N-1][N-1]);

    for (int i = 0; i < N; i++) {
        free(A[i]); free(B[i]); free(C[i]);
    }
    free(A); free(B); free(C);

    return 0;
}

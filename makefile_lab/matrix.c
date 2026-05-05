#include "matrix.h"
#include <omp.h>
#include <stdio.h>

void matrix_add(double **A, double **B, double **C, int n) {
    int num_threads;

    #pragma omp parallel
    {
        #pragma omp single
        {
            num_threads = omp_get_num_threads();
            printf("matrix_add running with %d threads\n", num_threads);
        }

        #pragma omp for collapse(2)
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
    }
}

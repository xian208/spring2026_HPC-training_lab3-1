#include "vector.h"
#include <omp.h>
#include <stdio.h>

double vector_dot(double *a, double *b, int n) {
    double sum = 0.0;
    int num_threads;

    #pragma omp parallel reduction(+:sum)
    {
        #pragma omp single
        {
            num_threads = omp_get_num_threads();
            printf("vector_dot running with %d threads\n", num_threads);
        }

        #pragma omp for
        for (int i = 0; i < n; i++) {
            sum += a[i] * b[i];
        }
    }

    return sum;
}

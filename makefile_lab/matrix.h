#ifndef MATRIX_H
#define MATRIX_H

// Add two N x N matrices A and B, store result in C
// Uses OpenMP to parallelize the computation
void matrix_add(double **A, double **B, double **C, int n);

#endif

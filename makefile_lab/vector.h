#ifndef VECTOR_H
#define VECTOR_H

// Compute dot product of two vectors a and b of length n
// Uses OpenMP to parallelize the computation
double vector_dot(double *a, double *b, int n);

#endif

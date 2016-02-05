#ifndef COMMON
#define COMMON

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdint.h>
#include <lapacke.h>
#include "sparseMatrix.h"

void print_two_dim(char* desc, double* mat, int m, int n);
void print_one_dim_double(char* desc, double* mat, int length);
void print_one_dim_int(char* desc, int* mat, int length);
void dot_product(double* C, int m, int n);
void column_norm (double* C, int m, int n);
void printline(void);
double getSpectralNorm(double* mat, int ell, int d);
void subtract(double* mat1, double* mat2, double* res);
double* getDenseCovariance(double* mat, int ell, int d);
void normalizeVector(double* vec, int len);
double computeCovErr(SparseMatrix* A, double* B, int ell, int d);
double computeRelCovErr(SparseMatrix* A, double* B, int ell, int d);

#endif


#include <stdio.h>
void Suma(int *, int *, int *, int);
void main(void) {
    int V1[10], V2[10], V3[10], N=10;
    Suma(V1, V2, V3, N);
}
void Suma(int A[], int B[], int C[], int T) {
    int I; for (I=0; I<T; I++) C[I] = A[I] + B[I];
}

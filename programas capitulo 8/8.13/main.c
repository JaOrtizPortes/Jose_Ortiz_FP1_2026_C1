#include <stdio.h>
void main(void) {
    int A[10][10], B[10][10], C[10][10], F1, C1, C2, I, J, K;
    for (I=0; I<F1; I++)
        for (J=0; J<C2; J++) {
            C[I][J] = 0;
            for (K=0; K<C1; K++) C[I][J] += A[I][K] * B[K][J];
        }
}

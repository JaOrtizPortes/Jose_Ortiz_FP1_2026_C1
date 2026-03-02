#include <stdio.h>
void main(void) {
    int A[100], N, I=0, J, K;
    scanf("%d", &N);
    while (I < N-1) {
        J = I + 1;
        while (J < N) {
            if (A[I] == A[J]) {
                for (K=J; K < N-1; K++) A[K] = A[K+1];
                N--;
            } else J++;
        } I++;
    }
}

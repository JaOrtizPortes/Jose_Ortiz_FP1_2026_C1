#include <stdio.h>
void main(void) {
    int I, N, P=0; float V[100], M;
    scanf("%d", &N);
    for (I=0; I<N; I++) scanf("%f", &V[I]);
    M = V[0];
    for (I=1; I<N; I++) if (V[I] > M) { M = V[I]; P = I; }
    printf("%f %d", M, P);
}

#include <stdio.h>
void main(void) {
    int I, N, C=0; float V[100], S=0, P;
    scanf("%d", &N);
    for (I=0; I<N; I++) { scanf("%f", &V[I]); S+=V[I]; }
    P = S/N;
    for (I=0; I<N; I++) if (V[I] > P) C++;
    printf("%f %d", P, C);
}

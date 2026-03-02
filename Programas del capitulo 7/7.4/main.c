#include <stdio.h>
void main(void) {
    int I, N, V[100], MAX, MIN, P1=0, P2=0;
    scanf("%d", &N);
    for (I=0; I<N; I++) scanf("%d", &V[I]);
    MAX = MIN = V[0];
    for (I=1; I<N; I++) {
        if (V[I] > MAX) { MAX = V[I]; P1 = I; }
        if (V[I] < MIN) { MIN = V[I]; P2 = I; }
    }
    printf("%d %d %d %d", MAX, P1, MIN, P2);
}

#include <stdio.h>
void main(void) {
    int V[100], N, I, M;
    scanf("%d", &N);
    for (I=0; I<N; I++) scanf("%d", &V[I]);
    M = V[0];
    for (I=1; I<N; I++) if (V[I] > M) M = V[I];
    printf("%d", M);
}

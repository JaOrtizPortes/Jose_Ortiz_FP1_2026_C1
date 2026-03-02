#include <stdio.h>
void main(void) {
    int V[100], N, I, K;
    scanf("%d", &N);
    for (I=0; I<N; I++) scanf("%d", &V[I]);
    scanf("%d", &K);
    for (I=0; I<N; I++) if (V[I] == K) printf("%d", I);
}

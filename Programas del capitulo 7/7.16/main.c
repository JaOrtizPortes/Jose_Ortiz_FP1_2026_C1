#include <stdio.h>
void main(void) {
    int V[100], N, I, K;
    scanf("%d %d", &N, &K);
    I = 0;
    while (I<N && V[I]<K) I++;
    for (int J=N; J>I; J--) V[J] = V[J-1];
    V[I] = K; N++;
}

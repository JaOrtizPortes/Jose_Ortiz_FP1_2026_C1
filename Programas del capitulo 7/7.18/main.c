#include <stdio.h>
void main(void) {
    int V[100], N, K, L=0, R, M, P=-1;
    scanf("%d %d", &N, &K); R=N-1;
    while (L<=R) {
        M=(L+R)/2;
        if (V[M]==K) { P=M; break; }
        if (V[M]>K) R=M-1; else L=M+1;
    }
}

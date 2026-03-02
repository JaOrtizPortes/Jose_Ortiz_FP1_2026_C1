#include <stdio.h>
int Busca(int *, int, int);
void main(void) {
    int V[100], N, K, R;
    scanf("%d %K", &N, &K);
    R = Busca(V, N, K);
}
int Busca(int A[], int T, int K) {
    int I=0; while (I<T && A[I]!=K) I++;
    return (I<T) ? I : -1;
}

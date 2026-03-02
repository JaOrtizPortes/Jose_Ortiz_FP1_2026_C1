#include <stdio.h>
void main(void) {
    int M[10][10], N, I, S=0;
    scanf("%d", &N);
    for (I=0; I<N; I++) S += M[I][I];
    printf("%d", S);
}

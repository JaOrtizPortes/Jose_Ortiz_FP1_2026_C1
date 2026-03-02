#include <stdio.h>
void main(void) {
    int M[10][10], T[10][10], F, C, I, J;
    scanf("%d %d", &F, &C);
    for (I=0; I<F; I++)
        for (J=0; J<C; J++) T[J][I] = M[I][J];
}

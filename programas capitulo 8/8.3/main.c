#include <stdio.h>
void main(void) {
    int M[10][10], F, C, I, J, S;
    scanf("%d %d", &F, &C);
    for (I=0; I<F; I++) {
        S=0; for (J=0; J<C; J++) S+=M[I][J];
        printf("%d ", S);
    }
}

#include <stdio.h>
void main(void) {
    int M[10][10], F, C, I, J, MAX, FMAX;
    scanf("%d %d", &F, &C);
    for (I=0; I<F; I++) {
        MAX=M[I][0];
        for (J=1; J<C; J++) if (M[I][J]>MAX) MAX=M[I][J];
        printf("%d ", MAX);
    }
}

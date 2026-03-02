#include <stdio.h>
void main(void) {
    int M[20][20], F, C, I, J;
    scanf("%d %d", &F, &C);
    for (I=0; I<F; I++)
        for (J=0; J<C; J++) scanf("%d", &M[I][J]);
}

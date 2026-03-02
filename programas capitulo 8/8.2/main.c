#include <stdio.h>
void main(void) {
    int M[10][10], F, C, I, J, S=0;
    scanf("%d %d", &F, &C);
    for (I=0; I<F; I++)
        for (J=0; J<C; J++) { scanf("%d", &M[I][J]); S+=M[I][J]; }
    printf("%d", S);
}

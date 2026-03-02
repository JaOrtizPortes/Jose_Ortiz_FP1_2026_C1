#include <stdio.h>
void main(void) {
    int M1[10][10], M2[10][10], M3[10][10], F, C, I, J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++) M3[I][J] = M1[I][J] + M2[I][J];
}

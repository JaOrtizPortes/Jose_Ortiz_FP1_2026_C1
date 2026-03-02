#include <stdio.h>
void main(void) {
    int M[10][10], N, I, J, T=1;
    for (I=1; I<N; I++)
        for (J=0; J<I; J++)
            if (M[I][J]!=0) T=0;
}

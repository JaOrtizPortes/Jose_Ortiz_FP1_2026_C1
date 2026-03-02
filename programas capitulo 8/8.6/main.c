#include <stdio.h>
void main(void) {
    int M[10][10], N, I, J;
    scanf("%d", &N);
    for (I=0; I<N; I++)
        for (J=0; J<N; J++)
            if (I == J) M[I][J]=1; else M[I][J]=0;
}

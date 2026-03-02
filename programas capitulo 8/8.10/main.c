#include <stdio.h>
void main(void) {
    int M[10][10], N, I, J, S=1;
    scanf("%d", &N);
    for (I=0; I<N; I++)
        for (J=0; J<I; J++)
            if (M[I][J] != M[J][I]) S=0;
    printf("%d", S);
}

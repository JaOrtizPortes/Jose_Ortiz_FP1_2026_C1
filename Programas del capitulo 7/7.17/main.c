#include <stdio.h>
void main(void) {
    int A[100], N, I, J, AUX;
    scanf("%d", &N);
    for (I=0; I<N-1; I++)
        for (J=0; J<N-1-I; J++)
            if (A[J]>A[J+1]) { AUX=A[J]; A[J]=A[J+1]; A[J+1]=AUX; }
}

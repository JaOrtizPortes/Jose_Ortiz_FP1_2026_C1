#include <stdio.h>
void main(void) {
    int M[10][10], N, I, J, AUX;
    for (I=0; I<N; I++)
        for (J=I+1; J<N; J++) {
            AUX = M[I][J]; M[I][J] = M[J][I]; M[J][I] = AUX;
        }
}

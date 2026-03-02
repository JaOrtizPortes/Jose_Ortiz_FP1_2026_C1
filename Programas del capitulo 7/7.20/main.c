#include <stdio.h>
void main(void) {
    int V1[50], V2[50], V3[100], N1, N2, I=0, J=0, K=0;
    while (I<N1 && J<N2) {
        if (V1[I]<V2[J]) V3[K++]=V1[I++];
        else V3[K++]=V2[J++];
    }
    while (I<N1) V3[K++]=V1[I++];
    while (J<N2) V3[K++]=V2[J++];
}

#include <stdio.h>
void main(void) {
    int V1[50], V2[50], N1, N2, I, J;
    scanf("%d %d", &N1, &N2);
    for (I=0; I<N1; I++)
        for (J=0; J<N2; J++)
            if (V1[I] == V2[J]) printf("%d ", V1[I]);
}

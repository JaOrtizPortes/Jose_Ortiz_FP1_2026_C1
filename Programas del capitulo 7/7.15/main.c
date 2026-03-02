#include <stdio.h>
void main(void) {
    int V[100], N, I, J, AUX;
    scanf("%d", &N);
    for (I=0, J=N-1; I<J; I++, J--) {
        AUX = V[I]; V[I] = V[J]; V[J] = AUX;
    }
}

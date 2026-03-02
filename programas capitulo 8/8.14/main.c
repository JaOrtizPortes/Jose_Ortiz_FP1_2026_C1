#include <stdio.h>
void main(void) {
    int M[10][10], F, C, I, J, S=0;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
            if (I==0 || I==F-1 || J==0 || J==C-1) S+=M[I][J];
}

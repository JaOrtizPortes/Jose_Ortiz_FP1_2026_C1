#include <stdio.h>
void main(void) {
    int I, VEC[10];
    for (I=0; I<10; I++) scanf("%d", &VEC[I]);
    for (I=9; I>=0; I--) printf("%d ", VEC[I]);
}

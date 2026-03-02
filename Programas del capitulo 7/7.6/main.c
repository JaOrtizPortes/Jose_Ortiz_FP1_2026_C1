#include <stdio.h>
void main(void) {
    int V, C[6]={0}, I, T=0;
    scanf("%d", &V);
    while (V != 0) { if (V>0 && V<6) { C[V]++; T++; } scanf("%d", &V); }
    for (I=1; I<=5; I++) printf("%f ", (float)C[I]/T*100);
}

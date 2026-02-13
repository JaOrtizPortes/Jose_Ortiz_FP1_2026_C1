#include <stdio.h>
#include <math.h>

void main(void)
{
    int N, I;
    float X, SUM = 1, TERM = 1;
    printf("Ingrese el valor de X y de N: ");
    scanf("%f %d", &X, &N);

    for (I = 1; I <= N; I++) {
        TERM *= X / I;
        SUM += TERM;
    }

    printf("\nLa aproximación de e^%.2f es: %7.4f", X, SUM);
}

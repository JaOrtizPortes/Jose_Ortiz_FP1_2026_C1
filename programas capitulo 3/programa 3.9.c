#include <stdio.h>
#include <math.h>


void main(void)
{
    int N, I, SGN = 1;
    float X, SUM = 0, TERM;
    printf("Ingrese el valor de X (en radianes) y N términos: ");
    scanf("%f %d", &X, &N);

    for (I = 0; I < N; I++) {
        TERM = pow(X, 2 * I) / tgamma(2 * I + 1);
        SUM += SGN * TERM;
        SGN *= -1;
    }

    printf("\nLa aproximación de cos(%.2f) es: %7.4f", X, SUM);
}

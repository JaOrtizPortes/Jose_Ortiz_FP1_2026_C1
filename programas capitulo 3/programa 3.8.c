#include <stdio.h>
#include <math.h>

/* Serie seno(x).
   El programa aproxima el valor de sen(x) usando su serie de Taylor. */

void main(void)
{
    int N, I, SGN = 1;
    float X, SUM = 0, TERM;
    printf("Ingrese el valor de X (en radianes) y N términos: ");
    scanf("%f %d", &X, &N);

    for (I = 1; I <= N; I++) {
        TERM = pow(X, 2 * I - 1) / tgamma(2 * I); /* tgamma(n) = (n-1)! */
        SUM += SGN * TERM;
        SGN *= -1;
    }

    printf("\nLa aproximación de sen(%.2f) es: %7.4f", X, SUM);
}

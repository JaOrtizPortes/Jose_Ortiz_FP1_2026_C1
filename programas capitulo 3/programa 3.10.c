#include <stdio.h>
#include <math.h>


void main(void)
{
    int N, I, SGN = 1;
    double SUM = 0;
    printf("Ingrese el número de términos N: ");
    scanf("%d", &N);

    for (I = 0; I < N; I++) {
        SUM += SGN * (1.0 / (2 * I + 1));
        SGN *= -1;
    }

    printf("\nLa aproximación de PI con %d términos es: %10.8f", N, SUM * 4);
}

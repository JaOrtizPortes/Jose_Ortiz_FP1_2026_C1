#include <stdio.h>

void main(void)
{
    int N, I;
    float SUM = 0;
    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++)
        SUM += 1.0 / I;

    printf("\nLa suma de la serie armónica es: %7.4f", SUM);
}

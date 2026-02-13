#include <stdio.h>

void main(void)
{
    int N, I, SUM = 0;
    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++)
        SUM += I;

    printf("\nLa suma es: %d", SUM);
}

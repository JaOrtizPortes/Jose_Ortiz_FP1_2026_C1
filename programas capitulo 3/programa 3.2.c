#include <stdio.h>

void main(void)
{
    int N, I;
    long FACT = 1;
    printf("Ingrese un número: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++)
        FACT *= I;

    printf("\nEl factorial de %d es: %ld", N, FACT);
}

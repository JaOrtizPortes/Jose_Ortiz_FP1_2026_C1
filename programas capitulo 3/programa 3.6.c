#include <stdio.h>
#include <math.h>

void main(void)
{
    int N, I;
    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    for (I = 0; I <= N; I++)
        printf("\n2^%d = %.0f", I, pow(2, I));
}

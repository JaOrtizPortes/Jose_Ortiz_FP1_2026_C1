#include <stdio.h>

void main(void)
{
    int N, I;
    printf("Ingrese un número: ");
    scanf("%d", &N);

    for (I = 1; I <= 10; I++)
        printf("\n%d x %d = %d", N, I, N * I);
}

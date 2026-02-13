#include <stdio.h>

void main(void)
{
    int N, I;
    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++)
        printf("\n%d", 2 * I);
}

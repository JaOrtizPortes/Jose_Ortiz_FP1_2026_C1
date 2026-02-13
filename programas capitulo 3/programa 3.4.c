#include <stdio.h>

void main(void)
{
    int N, I;
    float CAL, SUM = 0, PROM;
    printf("Ingrese el número de calificaciones: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++) {
        printf("Ingrese la calificación %d: ", I);
        scanf("%f", &CAL);
        SUM += CAL;
    }

    PROM = SUM / N;
    printf("\nEl promedio es: %5.2f", PROM);
}

#include <stdio.h>
#include <math.h>

void main(void)
{
    int NUM;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &NUM);

    if (NUM > 0) {
        printf("\nSerie de Ulam:\n");
        printf("%d\t", NUM);

        while (NUM != 1) {
            if (NUM % 2 == 0)
                NUM /= 2;
            else
                NUM = NUM * 3 + 1;
            printf("%d\t", NUM);
        }
    }
    else
        printf("\nEl número debe ser positivo.");
}

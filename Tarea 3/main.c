#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int usuario[3];
    int sorteo[3];
    int i, j;
    int coincidencias = 0;

    srand(time(NULL));

    printf("--- SORTEO DE NUMEROS ---\n");
    for(i = 0; i < 3; i++) {
        printf("Ingrese numero %d (10-40): ", i + 1);
        scanf("%d", &usuario[i]);

        if(usuario[i] < 10 || usuario[i] > 40) {
            printf("Error: Fuera de rango.\n");
            i--;
        }
    }

    printf("\n--- RESULTADOS ---\n");
    for(i = 0; i < 3; i++) {
        sorteo[i] = (rand() % 31) + 10;
        printf("Sorteo %d: [%d]\n", i + 1, sorteo[i]);
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(usuario[i] == sorteo[j]) {
                coincidencias++;
                break;
            }
        }
    }

    printf("\n---------------------------\n");
    printf("Coincidencias: %d\n", coincidencias);

    if(coincidencias > 0) {
        printf("RESULTADO: ¡GANASTE!\n");
    } else {
        printf("RESULTADO: SIN PREMIO\n");
    }
    printf("---------------------------\n");

    return 0;
}

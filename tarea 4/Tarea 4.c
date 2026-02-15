#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h> // Librería necesaria para sqrt()

#define ARRAY_SIZE 10
#define NUM_MAX 100

int i;
int change;
int n;
int a[ARRAY_SIZE];
int buf;
time_t seed;

double producto_total = 1.0;
double raiz_resultado;

int main(int argc, char* argv[])
{
    seed = time(NULL);
    srand(seed);
    n = ARRAY_SIZE;

    printf("--- GENERANDO Y ORDENANDO DATOS ---\n");
    for (i = 0; i < n; i++)
    {
        a[i] = (rand() % NUM_MAX) + 1;
    }
    change = 1;
    while (change == 1)
    {
        change = 0;
        for (i = 0; i <= n - 2; i++)
        {
            if (a[i] > a[i+1])
            {
                buf = a[i];
                a[i] = a[i+1];
                a[i+1] = buf;
                change = 1;
            }
        }
    }
    printf("\n%-10s | %-15s | %-15s\n", "Elemento", "Valor", "Raiz Cuadrada");
    printf("------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
    producto_total *= a[i];


        raiz_resultado = sqrt((double)a[i]);


    printf("a[%d]      | %-15d | %-15.4f\n", i, a[i], raiz_resultado);
    }

    printf("------------------------------------------------------\n");
    printf("\n> RESULTADO DE LA MULTIPLICACION TOTAL: %.2e", producto_total);

    printf("\n\nProceso finalizado.\n");

    return 0;
}





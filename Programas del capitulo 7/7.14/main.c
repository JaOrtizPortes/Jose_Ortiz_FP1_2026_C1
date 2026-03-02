#include <stdio.h>
#include <math.h>
double Promedio(float *, int);
double Varianza(float *, int, double);
void main(void) {
    float V[100]; int N; double P, VR;
    scanf("%d", &N);
    P = Promedio(V, N);
    VR = Varianza(V, N, P);
    printf("%f %f", P, sqrt(VR));
}
double Promedio(float A[], int T) {
    int I; double S=0; for (I=0; I<T; I++) S+=A[I];
    return S/T;
}
double Varianza(float A[], int T, double P) {
    int I; double S=0; for (I=0; I<T; I++) S+=pow((A[I]-P), 2);
    return S/T;
}

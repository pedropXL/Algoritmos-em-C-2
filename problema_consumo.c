#include <stdio.h>

int main()
{
    int distancia;
    double combustivel, medio;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia);
    printf("Combustível gasto: ");
    scanf("%lf", &combustivel);
    medio=(double) distancia/combustivel;
    printf("Consumo medio = %.3lf", medio);
    return 0;
}

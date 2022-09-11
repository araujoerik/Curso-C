#include "stdio.h"
#include "windows.h"
#define dolares 20

int main()
{
    float cantidad;
    printf("Cuantos dolares necesita cambiar a pesos \n");
    scanf("%f",&cantidad);
    printf("La cantidad total es: $%.2f pesos",cantidad*dolares);
    return 0;
}
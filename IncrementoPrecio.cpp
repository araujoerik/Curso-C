/* Programa que incrementa el precio si su precio es inferior a $1500
Estructura selectiva: If*/

#include"stdio.h"
#include"windows.h"

int main()
{
    float precio;
    printf("Cual es el precio del producto\n");
    scanf("%f",&precio);
    if(precio<1500)
    {
        printf("El precio total es: $ %.2f",precio + (precio * .11));
    }
    else if(precio>=1500)
    {
        printf("El precio total es: $ %.2f",precio + (precio * .08));
    }
}
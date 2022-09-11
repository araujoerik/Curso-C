/*Programa que calcula el precio de un billete de ferrocarril
ida y vuelta, conociendo la distancia de las dos ciudades y la estancia
en dias 
12-10-2019
Estructura selectiva: if*/

#include"stdio.h"
#include"windows.h"
#define KM 50

int main()
{
    float dias,distancia,costo;
    printf("Cuantos dias piensa estar de viaje\n");
    scanf("%f",&dias);
    printf("Que distancia recorrera\n");
    scanf("%f",&distancia);
    costo = (KM * distancia);
    if(dias>=10 || distancia>=500)
    {
        printf("El pago total es: $ %2.f",costo - (costo * .20));
    }
    else if(distancia>=1)
    {
        printf("El pago total es: $ %.2f",costo);
    }
}

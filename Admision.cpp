/*Programa que indica si un alumno fue admitido o no a la universidad
Estructura selectiva:if*/

#include"stdio.h"
#include"windows.h"

int main()
{
    float promedio;
    printf("Cual es el promedio obtenido\n");
    scanf("%f",&promedio);
    if(promedio>=85)
    {
        printf("Felicidades fuiste admitido");
    }
    else if(promedio<=84)
    {
        printf("Lo sentimos no fuiste admitido");
    }
}
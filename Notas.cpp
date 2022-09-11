/*Estructura selectiva: If anidado
Erik Uriel Araujo Yepiz
*/

#include"stdio.h"
#include"windows.h"
#include"conio.h"

int main()
{
    float calificacion;
    printf("Cual es tu calificacion\n");
    scanf("%f",&calificacion);
    if (calificacion >= 0 && calificacion <= 2)
    {
        printf("MUY DEFICIENTE\n");   
    }
    else if (calificacion >= 2.1 && calificacion <= 4.9)
    {
        printf("INSUFICIENTE\n");
    }
    else if (calificacion >= 5 && calificacion <= 5.9)
    {
        printf("ESFUERZATE MAS\n");
    }
    else if (calificacion >= 6 && calificacion <= 6.9)
    {
        printf("LA LIBRASTE DE PANZAZO\n");
    }
    else if (calificacion >= 7 && calificacion <= 7.9)
    {
        printf("REGULAR\n");
    }
    else if (calificacion >= 8 && calificacion <= 8.9)
    {
        printf("BIEN\n");
    }
    else if (calificacion >= 9 && calificacion <= 9.5)
    {
        printf("NOTABLE\n");
    }
    else if (calificacion > 9.6)
    {
        printf("SOBRESALIENTE\n");
    }
}
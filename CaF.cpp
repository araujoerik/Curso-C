/**/

#include "stdio.h"
#include "windows.h"

int main()
{
    float opcion, temp;
    printf("Selecciona una opcion\n 1.Convertir de Celsius a Fahrenheit\n 2.Convertir Fahrenheit a Celcius\n");
    scanf("%f", &opcion);
    printf("Cual es la temperatura que desea convertir\n");
    scanf("%f", &temp);
    if (opcion == 1)
    {
        printf("La conversion es: %.2f Fahrenheit\n",((temp * 9 / 5)+32));
    }
    else if (opcion == 2)
    {
        printf("La conversion es: % .2f Celsius\n",((temp - 32) * 5 / 9));
    }
    else if (opcion >= 3)
    {
        printf("Opcion invalida\n");
    }
}
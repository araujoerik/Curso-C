/*E1. Uso del ciclo do while
hacer un programa para obtener el promedio de una determinada
cantidad de numeros leidos desde el teclado.
Uso de una variable contador y un acumulador*/

#include "stdio.h"
#include "conio.h"
#include "windows.h"

int main()
{
    float num, sum, cuenta;
    sum=0; //Acumulador
    cuenta=0; //Contador
    //Leer los numeros mientras num!=-1
    do{
        printf("\n Dame un numero (para terminar -1) ");
        scanf("%f",&num);
        sum=sum+num;
        cuenta=cuenta+1;
    }while(num!=-1);
    printf("\n El promedio de los %.0f numeros es %.2f",(cuenta-1),(sum-num)/(cuenta-1));
    getch();
}
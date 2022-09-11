/*
Erik Uriel Araujo Yepiz
28-09-2019
Estructura secuencial
Ejercicio Cambio*/

#include"stdio.h"
#include"windows.h"

int main()
{
	float dinero,costo;
	printf("Introduzca costo del articulo\n");
	scanf("%f",&costo);
	printf("Efectivo entregado:\n");
	scanf("%f",&dinero);
	printf("Efectivo a entregar: %.2f\n",(dinero-costo));
	system("pause>null");
}

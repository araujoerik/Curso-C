/*
Estructura secuencial
Ejercicio Medidas*/

#include"stdio.h"
#include"windows.h"
#define pie 0.09290
#define libra 0.45359

int main()
{
	float longitud = 3.281,peso = 2.205; /*metros representados en pies y kilos representados en libras*/
	float ft = pie, lb = libra;
	printf("Cual es la longitud en pies que deseas convertir a metros?\n");
	scanf("%f",&ft);
	printf("Cual es el peso en libras que deseas convertir a kilogramos?\n");
	scanf("%f",&lb);
	printf("La longitud es: %.4f"" mts\n",(ft/longitud));
	printf("El peso es: %.4f"" kgs\n",(lb/peso));
}

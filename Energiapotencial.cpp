/*
Un programa que determina la energia potencial de un cuerpo
energia potencial=masa*altura*gravedad*/

#include"stdio.h"
#include"windows.h"
#define gravedad -9.8

int main()
{
	float masa,altura,energia;
	printf("Cual es el valor de la masa\n");
	scanf("%f",&masa);
	printf("Cual es el valor de la altura\n");
	scanf("%f",&altura);
	printf("La energia potencial es:%.2f\n",(masa*altura*gravedad));
	scanf("%f",&energia);
	
}

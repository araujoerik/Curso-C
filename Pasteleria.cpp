/*
Erik Uriel Araujo Yepiz
28-09-2019
Estructura secuencial
Ejercicio Pasteleria*/

#include"stdio.h"
#include"windows.h"
#define grande 350.00
#define mediano 200.00
#define chico 99.00

int main()
{
	int pg,pm,pc;
	float g = grande, m = mediano, ch = chico;
	printf("Cuantos pasteles grandes vendiste hoy?\n");
	scanf("%d",&pg);
	printf("Cuantos pasteles medianos vendiste hoy?\n");
	scanf("%d",&pm);
	printf("Cuantos pasteles chicos vendiste hoy?\n");
	scanf("%d",&pc);
	printf("La venta de pasteles grandes el dia de hoy es: %.2f\n",(pg*g));
	printf("La venta de pasteles medianos el dia de hoy es: %.2f\n",(pm*m));
	printf("La venta de pasteles chicos el dia de hoy es: %.2f\n",(pc*ch));
	printf("La venta total diaria es: %.2f",(pg*g+pm*m+pc*ch));	
}

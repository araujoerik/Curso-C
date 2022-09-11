/*
Estructura secuencial
Programa que lee 4 datos flotantes y realiza el promedio*/

#include"stdio.h"
#include"windows.h"

int main()
{
	//Declaracion de variables
	float n1,n2,n3,n4,suma=0.0,prom=0.0;
	printf("Programa que obtiene el promedio de 4 numeros\n");
	printf("Dame el primer numero\n\t");
	scanf("%f",&n1);
	printf("Dame el segundo numero\n\t");
	scanf("%f",&n2);
	printf("Dame el tercer numero\n\t");
	scanf("%f",&n3);
	printf("Dame el cuarto numero\n\t");
	scanf("%f",&n4);
	printf("El promedio es: %.2f\n",(n1+n2+n3+n4)/4);	
}

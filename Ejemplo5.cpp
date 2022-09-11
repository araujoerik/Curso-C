/*Estructura secuencial
Programa que calcule el area de un rectangulo
*/

#include"stdio.h"
#include"windows.h"

int main()
{
	float b,h,a;
	printf("�Cuanto mide la base?\n");
	scanf("%f",&b);
	printf("�Cuanto mide la altura?\n");
	scanf("%f",&h);
	printf("El area del rectangulo es: %.2f",(b*h));
}

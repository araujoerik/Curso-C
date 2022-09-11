/*
Erik Uriel Araujo Yepiz
26/09/2019
Realizar un programa que eleve al cuadrado y al cubo de cualquier numero, y que imprima el numero junto a su cuadrado
*/
#include"stdio.h"
#include"windows.h"

int main()
{
	int num;
	printf("Dame el numero que quieras elevar al cuadrado\n");
	scanf("%d",&num);
	printf("El numero al cuadrado es: %d\n", (num*num));
	printf("Dame el numero que quieras elevar a su cubo\n");
	scanf("%d",&num);
	printf("El numero al cubo: %d\n",(num*num*num));
}

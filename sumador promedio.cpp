#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"Spanish");
	int num, valor, contador, cantidad=0, promedio;
	do{
	printf("Ingresa todos los números que desée\n");
	scanf("%d",&valor);
	num=valor;
	printf("Presione 0 para terminar\n");	
	//system("pause>NULL");
	//system("cls");
	}while(num!=0);
	if(num%2==0)
	{
		contador=valor+=contador;
		printf("La suma de los números pares es %d\n",contador);
		
	}else if(num%2==1)
	{
		promedio=valor+=contador/cantidad-1;
		printf("El promedio de los numeros impares es: %d\n",promedio);
			
	}	
}

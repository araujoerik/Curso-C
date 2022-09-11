//Programa que presenta una tabla de multiplicar
//del 1 al 10

#include "stdio.h"
#include "conio.h"

int main()
{
    int i,num;
    printf("\n Numero del que deseas la tabla \n");
    scanf("%d",&num);
    for(i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", num, i, num*i);
    }
}
#include "stdio.h"
#include "windows.h"
#define dia 86400

int main()
{
    int dias;
    do{
    printf("Cuantos dias deseas convertir a segundos \n");
    scanf("%d",&dias);
    printf("Hay %d segundos en %d dias\n",dia*dias,dias);
    }while(dias >=1 && dias < 365);
}
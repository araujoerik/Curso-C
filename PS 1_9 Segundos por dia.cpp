#include "stdio.h"
#include "windows.h"
#define dia 86400

int main()
{
    int dias;
    printf("Cuantos dias deseas convertir a segundos \n");
    scanf("%d",&dias);
    printf("Hay %d segundos en %d dias",dia*dias,dias);
    return 0;

}
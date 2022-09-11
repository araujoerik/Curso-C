/*
    Switch : Estructura selectiva multiple 
*/

#include "stdio.h"
#include "windows.h"
#include "stdlib.h"
#include "conio.h"

int main()
{
    system("color E2");
    char num;
    printf("Dame un numero \n");
    num = getche(); //scanf("%c", &num);
    switch (num)
    {
    case '1':
        printf(" Domingo\n");
        break;
    case '2':
        printf(" Lunes\n");
        break;
    case '3':
        printf(" Martes\n");
        break;
    case '4':
        printf(" Miercoles\n");
        break;
    case '5':
        printf(" Jueves\n");
        break;
    case '6':
        printf(" Viernes\n");
        break;
    case '7':
        printf(" Sabado\n");
        break;
    default: 
        printf(" Del uno al siete, sabe...");
        system("pause>null");
    }
}
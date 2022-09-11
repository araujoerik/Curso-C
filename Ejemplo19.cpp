#include "conio.h"
#include "stdio.h"
#include "ctype.h"
#define precio 19.80

int main()
{
    float litro;
    char r; //Centinela
    do{
        printf("\n Cuantos litros son ");
        scanf("%f",&litro);
        printf("\n Pago es: %.2f", litro*precio);
        //Uso de otro ciclo para la verificacion de la letra
        do{
            printf("\n Otro calculo [S/N] ");
            r=getche();
            r=tolower(r);
            if((r!='s')&&(r!='n'))
            {
                printf("\n Letra incorrecta"); getch();
            }
        }while((r!='s')&&(r!='n'));
    }while(r=='s');
    getch();
}
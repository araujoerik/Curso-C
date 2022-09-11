#include "stdio.h"
#include "windows.h"
#include "conio.h"

int main()
{
    int x=0;
    for(x=1; x<=30;x++)
    {
        printf("%d\t",x);
        if(x%7==0)
        {printf("\n");}
    }
    getch();
}
//Programa que imprime los numeros del 1 al 30 escribiendo salto de linea cada 7 numeros
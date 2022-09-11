#include "stdio.h"
#include "windows.h"
#include "conio.h"

int main()
{
    int mat[5];
    int may, y, suma, opc;
    do{
        suma=0;
        may=0;
        printf("Ingrese sus 5 valores\n");
        fflush(stdin);
        for(y=0; y<=4; y++)
            scanf("%d",&mat[y]);
        (getchar()!='\n');
        may=mat[0];
        for(y=0; y<=4; y++)
    {
        if(may>mat[y+1])
            may;
        else
            may=mat[y+1];
    }
        printf("El mayor es %d\n", may);
        for(y=0; y<=4; y++)
    {
        suma+=mat[y];
    }
        printf("La suma total es: %d\n",suma);
        printf("\n\nPresiona 1 para continuar o presiona cualquier tecla para salir\n");
        printf("________________________________________________________________\n");
        scanf("%d",&opc);
        system("cls");
    }while(opc==1);
}
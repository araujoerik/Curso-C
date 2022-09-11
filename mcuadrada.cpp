#include "stdio.h"
#include "windows.h"

int main()
{
    int i, j, f, c, opc;
    int matriz[4][3]={NULL};
    do{
        printf("Ingrese los valores\n");
        fflush(stdin);
        for(i=0; i<=3; i++)
            {  
                for(j=0; j<=2; j++)
                scanf("%d",&matriz[i][j]);
            }
            printf("\n");
            for(f=0; f<3; f++)
            {
                for(c=0; c<4; c++)
                {
                    printf("%d\t",matriz[f][c]);
                }
                printf("\n");
            }
            printf("\n\nPresiona 1 para continuar o presiona cualquier tecla para salir\n");
            printf("________________________________________________________________\n");
            scanf("%d",&opc);
            system("cls");
    }while(opc==1);
}
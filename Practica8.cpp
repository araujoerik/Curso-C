#include "stdio.h"
#include "windows.h"
#include "conio.h"

int main()
{
    int arr[8];
    int x, opc;
    do{
    printf("Introduce los valores\n");
    for(x=0; x<8; x++)
        {
        fflush(stdin);
        scanf("%d",&arr[x]);
        (getchar()!='\n');
        }
    for(x=0; x<8; x++)
        {
        printf("%d\t",arr[x]);
        }
        printf("\n");
    for(x=7; x>=0; x--)
    {
        printf("%d\t",arr[x]);
    } 
    printf("\n\nPresiona 1 para continuar o presiona cualquier tecla para salir\n");
    printf("________________________________________________________________\n");
    scanf("%d",&opc);
    getch();
    system("cls");
    }while(opc==1);

}

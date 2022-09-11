#include "stdio.h"
#include "windows.h"
#include "conio.h"

int main()
{
    int x, y, num;
    do{
    printf("Ingresa el n%cmero que deseas utilizar %c Presiona 0 para salir\n",163,162);
    fflush(stdin);
    scanf("%d\n",&num);
    (getchar()!='\n');
    for(x=1; x<=num; x++)
    {
        for(y=1; y<=x; y++)
        {
            printf("%d ",y);
        }
        printf("\n");
    }
    getch();
    system("cls");
    }while(num != 0);
}
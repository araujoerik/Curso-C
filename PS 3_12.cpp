#include "stdio.h"
#include "windows.h"
#include "conio.h"

void primo(int num);
 
int main()
{
    int numero, i;
    do{
        printf("\t\tImprimiremos los n%cmeros primos menores al n%cmero introducido\n",163,163);
        printf("\t\t------------------------------------------------------------\n\n");
        printf("Introduce el n%cmero %c presiona 0 para salir\n",163,162);
        fflush(stdin);
        scanf("%d",&numero);
        (getchar()!='\n');
    for(i=1;i<=numero;i++)
        primo(i);
    getch();
    system("cls");
    }while(numero != 0);
}
 
void primo(int num)
{
    int primo=1,divisor=2;
    if(num==1)
        printf("\t");
    else
    {
        while((primo==1)&&(num!=divisor))
        {
            if(num%divisor==0)
                primo=0;
            else
                divisor++;
        }
        if(primo==1)
            printf("%d\t",num);
    }
}
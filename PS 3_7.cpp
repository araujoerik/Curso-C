#include "stdio.h"
#include "windows.h"
#include "math.h"
#include "conio.h"

int main()
{
    int num;
    float b, e, suma, potencia;
    do{
    printf("Cu%cntos valores necesitas potenciar o Pulsa 0 para terminar\n",160);
    fflush(stdin);
    scanf("%d",&num);
    (getchar()!='\n');
    e=1;
    for(b=1; b<=num; b++){
        printf("%.1f\n", pow(b,e));
        potencia=pow(b,e);
        suma =suma + potencia;
        e++;
        }
    printf("La suma total es: %.1f",suma);
    suma=0;
    getch();
    system("cls");
    }while(num != 0);
}

#include "stdio.h"
#include "windows.h"
#include "ctype.h"
#include "conio.h"

int main()
{
    float i, d, cant,suma;
    do{
    printf("Cu%cntos valores quieres que tenga tu serie o pulsa 0 para terminar\n",160);
    fflush(stdin);
    scanf("%f",&cant);
    (getchar()!='\n');
    i=1;
    d=cant; 
    for (d=1;d<=cant;d++)
    {
        printf("%.4f\n",i/d);
        suma= suma + i/d;  
    }   
    printf("La suma total es: %.4f\n",suma); 
    suma=0;
    getch();
    system("cls");
    }while(cant != 0);   
}
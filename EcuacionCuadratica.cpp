/*Programa para la ecuacion cuadratica*/

#include"stdio.h"
#include"conio.h"
#include"math.h"
#include"windows.h"
#include"stdlib.h"

void gotoxy (int x,int y)
{
    HANDLE hcon;
    hcon= GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition(hcon,dwPos);
}

int main ()

{
    system("color 2E");
    gotoxy (60,15); printf("****************************************************");
    gotoxy (60,16); printf("*  Practica de formula general ecuacion cuadratica *");
    gotoxy (60,17); printf("****************************************************");
    gotoxy (60,19); printf("Pulsa cualquier tecla para continuar...");
    getch();
    system("cls");
    system("color 5E");

    int a,b,c;
    float disc,x1,x2;
    gotoxy (60,12); printf("----- ECUACION CUADRATICA -----");
    gotoxy (60,14); printf("Cual es el valor de AX^2");
    gotoxy (60,15); scanf("%d",&a);
    gotoxy (60,16); printf("Cual es el valor de BX");
    gotoxy (60,17); scanf("%d",&b);
    gotoxy (60,18); printf("Cual es el valor de C");
    gotoxy (60,19); scanf("%d", &c);
    disc= sqrt(pow(b,2.0)-(4*a*c));
    x1=(-(b*-1)+(disc))/(2*a);
    x2=(-(b*-1)-(disc))/(2*a);


    while (a == 0)
    {
        gotoxy (60,14); printf("Cual es el valor de A\n");
        gotoxy (60,15); scanf("%d", &a);
    }
    if (a != 0)
    {
        gotoxy (60,20); printf("Calculando...");
    }
    else
    {
        gotoxy (60,20); printf("No es posible realizar la operacion");
    }
    
    if (disc > 0)
    
    {
        gotoxy (60,21); printf("El resultado es:\t");
        gotoxy (60,22); Sleep(5000); printf("<X + %.0f> <X  %.0f> \n", x1, x2*-1);
    }
    else 
    {
        if(disc == 0)
        {
            gotoxy(60,20); printf("La ecuacion solo tiene una solucion: <X+ %.0f> <X- %.0f>", x1,x2);
        } 
        else
        {
            gotoxy(60, 20); printf("La solucion tiene la misma solucion: x1 = %.0f x2 = %.0f",x1,x2);
        }
          getch();
    }
    gotoxy(60,24);printf("Pulsa cualquier tecla para continuar...\n");
    getch();

    system("cls");
    system("color E1");
    gotoxy (84,22); printf("ADIOS");
    system("pause>null");
}
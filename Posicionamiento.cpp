/* E1. Posicionamiento en pantalla*/
#include"stdio.h"
#include"windows.h"

//Funcion gotoxy
void gotoxy(int x, int y)
{
    //Controladores que identifican la salida de coordenadas
    HANDLE hcon;
    hcon=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x; //Establece coordenadas X
    dwPos.Y = y; //Establece coordenadas Y
    SetConsoleCursorPosition(hcon,dwPos);
}

//Programa Principal
int main()
{
    system("color 09");
    gotoxy(25,10); 
    printf("Hola!!!!\n");
    system("pause");
    system("cls");
    gotoxy(15,4); printf("Buen d%ca",161);
    system("pause>null");
    //Aqui cambiamos el color
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(15,6); printf("Ingenieria en Computacion");
    system("pause>null");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 46);
    gotoxy(15,8); printf("Unidad Olimpica, Ingenierias"); /*x=2 (colorfondo)*16+14(texto)46*/
    system("pause>null");
    //Si queremos que lo haga en toda la pantalla
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 236);
    system("cls");
    gotoxy(15,10); printf("Centro Universitario UTEG");
    Sleep(1000);
}


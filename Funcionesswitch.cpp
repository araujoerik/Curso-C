#include "stdio.h"
#include "windows.h"
#include "math.h"
#include "conio.h"

#define dolar 20
#define dia 86400
#define pi 3.1416

void operacion()
{
    int n1, n2;
    printf("Cual es el primer numero\n");
    scanf("%d", &n1);
    printf("Cual es el segundo numero\n");
    scanf("%d", &n2);
    printf("La suma de los dos numeros es: %d\n", n1 + n2);
    printf("La resta de los dos numero es: %d\n", n1 - n2);
    printf("La multiplicacion de los dos numeros es: %d\n", n1 * n2);
    getch();
}

void pago()
{
    float pre, pag;
    printf("Cual es el costo del articulo\n");
    scanf("%f", &pre);
    printf("Ingrese la cantidad de pago\n");
    scanf("%f", &pag);
    printf("Su cambio es: $ %.2f\n", pag - pre);
    printf("Gracias por su compra!!\n");
    getch();
}

void area()
{
    float radio;
    printf("Cual es el valor del radio\n");
    scanf("%f", &radio);
    printf("Dado el valor su area es: %.2f y su circunferencia es: %.2f\n", pi * pow(radio, 2), 2 * pi * (radio));
    getch();
}

void conversion() 
{
    int cantidad;
    printf("Cuantos dolares necesita cambiar a pesos \n");
    scanf("%d", &cantidad);
    printf("La cantidad total es: $%d pesos", cantidad * dolar);
    getch();
}

void segundos()
{
    int dias;
    printf("Cuantos dias deseas convertir a segundos \n");
    scanf("%d", &dias);
    printf("Hay %d segundos en %d dias", dia * dias, dias);
    getch();
}

void volumen()
{
    int lad;
    printf("Ingrese el valor lateral de la figura\n");
    scanf("%d", &lad);
    printf("Dado el valor este es el resultado\n");
    printf("El area de la base es: %d \n", lad * lad);
    printf("El area lateral es: %d \n", 4 * (lad * lad));
    printf("El area total es: %d \n", 6 * (lad * lad));
    printf("El volumen es: %d ", lad * lad * lad);
    getch();
}

void salida()
{
    exit(-1);
}

main()
{
    int opc;
    do{
        system("cls");
        printf(" MENU\n");
        printf("Selecciona una opcion \n");
        printf(" 1. PS 1.3 Operaciones aritmeticas\n 2. PS 1.4 Costos\n 3. PS 1.5 Area y circunferencia del circulo\n");
        printf(" 4. PS 1.6 Casa de cambio\n 5. PS 1.9 Segundos por dia\n 6. PS 1.13 Area y volumen de un cubo\n");
        printf(" 7. Salir\n");
        scanf("%d", &opc);
        switch (opc)
        {
            case 1:
            operacion();
            break;
            case 2:
            pago();
            break;
            case 3:
            area();
            break;
            case 4:
            conversion();
            break;
            case 5:
            segundos();
            break;
            case 6:
            volumen();
            break;
            case 7:
            salida();
            break;
        }
    }while ('opc!=6');
}
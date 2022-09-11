#include "stdio.h"
#include "windows.h"

void sumar()//Realiza la tarea de sumar en el main
{
    int x, y, z;
    printf("Ingrese 2 valores\n");
    scanf("%d %d", &x, &y);
    z = x + y;
    printf("Su suma es: %d\n", z);
    return;
}

void restar()//Realiza la tarea de restar en el main
{
    int a, b, c;
    printf("Ingrese 2 valores\n");
    scanf("%d %d", &a, &b);
    c = a - b;
    printf("Su resta es: %d\n", c);
    return;
}

void multiplicar()//Realiza la tarea de multiplicar en el main
{
    int p, q, r;
    printf("Ingrese 2 valores\n");
    scanf("%d %d",&p,&q);
    r = p * q;
    printf("Su multiplicacion es: %d\n",r);
    return;
}

void dividir()//Realiza la tarea de dividir en el main
{
    float t, s ,u;
    printf("Ingrese 2 valores\n");
    scanf("%f %f", &t, &s);
    u = t / s;
    printf("Su division es: %.2f\n", u);
    return;
}

main()
{
    printf("Vamos a realizar una resta\n");
    restar();
    printf("Podemos hacer otra resta\n");
    restar();
    printf("Hagamos ahora una suma\n");
    sumar();
    printf("Otra suma\n");
    sumar();
    printf("Hora de multiplicar\n");
    multiplicar();
    printf("Por ultimo dividimos\n");
    dividir();
    printf("Gracias!!");
}
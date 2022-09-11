#include "stdio.h"
#include "windows.h"
#include "math.h"
#include "locale.h"

float areacir(float,float);
float areatri(float, float);
float arearec(float,float);

main ()
{
    float area, radio, pi=3.1416;
    printf("-Calculemos el area de un circulo-\n");
    printf("Cual es el valor del radio?\n");
    scanf("%f",&radio);
    area = pi * pow(radio,2);
    printf("El area del circulo es: %.2f\n\n",area);
    float b, h, a;
    printf("-Calcularemos el area de un triangulo-\n");
    printf("Cual es el valor de la base?\n");
    scanf("%f",&b);
    printf("Cual es el valor de la altura?\n");
    scanf("%f",&h);
    a = (b * h) / 2;
    printf("El area es: %.2f\n\n",a);
    float base, altura, res;
    printf("-Calcularemos el area de un rectangulo-\n");
    printf("Cual es el valor de la base?\n");
    scanf("%f",&base);
    printf("Cual es valor de la altura?\n");
    scanf("%f",&altura);
    res = base * altura;
    printf("El area del rectangulo es: %.2f\n\n",res);

}

float areacir(float pi, float radio)
{
    float resultado;
    resultado = pi * pow(radio, 2);
    return resultado;
}

float areatri(float b, float h)
{
    float resultadot;
    resultadot = (b * h) / 2;
    return resultadot;
}

float arearec(float base, float altura)
{
    float resultador;
    resultador = base * altura;
    return resultador;

}

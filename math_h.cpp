#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#define pi 3.1416

int main()
{
    system("color 3");
    float radio, area;
    printf("Cual es el radio del circulo\n");
    scanf("%f",&radio);
    area = pi * pow(radio,2);
    system("pause");
    printf("El area del circulo es: %.2f",area);
}
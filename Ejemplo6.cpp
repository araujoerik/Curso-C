/*
Estructura selectiva: if y switch*/

#include"stdio.h"
#include"conio.h"

int main()
{
    float calf1,calf2,calf3,prom;
    printf("Cual fue tu primer calificación\n");
    scanf("%f",&calf1);
    printf("Cual fue tu segunda calificación\n");
    scanf("%f",&calf2);
    printf("Cual fue tu tercera calificación\n");
    scanf("%f",&calf3);
    prom= (calf1 + calf2 + calf3)/3;
    if(prom>=60)
    {
        printf("Tu promedio es: %.2f\n",(prom));
        printf("Felicidades aprobaste!!\n");
    }
    if(prom<=59)
    {
        printf("Tu promedio es: %.2f\n",(prom));
        printf("Suerte para la próxima u_u\n");
    }
    getch();
}
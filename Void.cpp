#include "stdio.h"
#include "windows.h"

void sumar()
{
    int x,y,z;
    printf("Ingrese 2 valores\n");
    scanf("%d %d",&x,&y);
    z=x+y;
    printf("Su suma es: %d\n",z);
    return;
}

main()
{
    printf("Hola, bienvenidos!!\n");
    sumar();
    printf("Gracias, vuelva pronto!!");
}
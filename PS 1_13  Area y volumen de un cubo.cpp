#include "stdio.h"
#include "windows.h"

int main()
{
    int lad;
    printf("Ingrese el valor lateral de la figura\n");
    scanf("%d",&lad);
    printf("Dado el valor este es el resultado\n");
    printf("El area de la base es: %d \n",lad*lad);
    printf("El area lateral es: %d \n",4*(lad*lad));
    printf("El area total es: %d \n",6*(lad*lad));
    printf("El volumen es: %d ",lad*lad*lad);
    return 0;
}
/*
    Estructura selectiva doble: if-else
*/

#include "stdio.h"
#include "windows.h"

int main()
{
    int num,num2;
    printf("Dame el primer numero\n");
    scanf("%d",&num);
    printf("Dame el segundo numero\n");
    scanf("%d",&num2);
    if(num==num2)
    {
        printf("El resultado es: %d\n",num * num2);
    }
    else if(num>num2)
    {
        printf("El resultado es: %d\n",num - num2);
    }
    if(num<num2)
    {
        printf("El resultado es: %d\n",num + num2);
    }
    system("pause>null");
}
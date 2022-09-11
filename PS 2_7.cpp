#include "stdio.h"
#include "windows.h"
#include "math.h"

int c(int);
int u(int);
int d(int);
int t(int);


main()
{
    int x, res, res0, res1, res2;
    printf("Ingresa el valor correspondiente a X\n");
    scanf("%d",&x);
    if (x%4==0)
    {
        res=c(x);
        printf("El valor de X es: %d\n", res);
    }
    if (x%4==1)
    {
        res0=u(x);
        printf("El valor de X es : %d\n", res0);
    }
    if (x%2==2)
    {
        res1=d(x);
        printf("El resultado de X es: %d\n", res1);
    }
    if(x%4==3)
    {
        res2=d(x);
        printf("El resultado de X es %d\n", res2);
    }
}

int c(int a)
{
    int resultado;
    resultado=pow(a,3);
    return resultado;
}

int u(int b)
{
    int resultado0;
    resultado0=pow(b,2)-14/pow(b,3);
    return resultado0;
}

int d(int c)
{
    int resultado1;
    resultado1=(pow(c,3)+5);
    return resultado1;
}

int t(int d)
{
    int resultado2;
    resultado2=sqrt(d);
    return resultado2;
}

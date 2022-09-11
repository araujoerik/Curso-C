#include "stdio.h"
#include "windows.h"

void numeros()
{
    int num;
    printf("Que numero deseas identificar\n");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Tu numero es CERO\n");
    }
    else if (num < 0)
    {
        printf("Tu numero es NEGATIVO\n");
    }
    
    else if (num %2 == 0)
    {
        printf("Tu numero es PAR\n");
    }
    else if(num %2 != 0)
    {
        printf("Tu numero es NON\n");  
    }
}

void orden()
{
    int a, b, c;
    printf("Orden Ascendente\n");
    printf("Ingrese tres numeros\n");
    scanf("%d %d %d",&a, &b, &c);

    if(a < b)
    {
        if(a < c)
        {
            if(b < c)
            printf("El orden es %d %d %d\n", a, b, c);
            else printf("El orden es %d %d %d\n", a, c, b);
        }
    }
    else
    {
        if(b < c)
        {
            if(a < c)
            printf("El orden es %d %d %d\n", b, a, c);
            else printf("El orden es %d %d %d\n", b, c, a);
        }
    }
    if(c < b)
    {
        if(a< b)
        printf("El orden es %d %d %d", c, a, b);
        else printf("El orden es %d %d %d", c, b, a);
    }
}

void mayor()
{
    int n1, n2, n3;
    printf("CUAL ES MAYOR\n");
    printf("Ingrese su primer numero: \n");
    scanf("%d", &n1);
    printf("Ingrese su segundo numero: \n");
    scanf("%d", &n2);
    printf("Ingrese su tercer numero: \n");
    scanf("%d", &n3);
    if (n1 >= n2 && n1 >= n3)
        printf("El numero mayor es: \n %d", n1);
    else if (n2 > n3)
        printf("El numero mayor es: \n %d", n2);
    else
        printf("El numero mayor es: \n %d", n3);
}

void salir()
{
    exit(0);
}

main()
{
    char opc;
    printf(" MENU\n");
    printf("Selecciona una opcion \n");
    printf(" a) Par, non o negativo\n b) Orden ascendente\n c) Cual es mayor\n");
    printf(" d) Salir\n");
    scanf("%c", &opc);
    switch (opc)
    {
        case 'a':
        numeros();
        break;
        case 'b':
        orden();
        break;
        case 'c':
        mayor();
        break;
        case 'd':
        salir();
        break;
    }
    
}


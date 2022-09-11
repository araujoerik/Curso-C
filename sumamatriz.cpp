#include "stdio.h"
#include "windows.h"
#include "conio.h"

int matriz2();
int matriz3();
int matriz5();

int main()
{
    int opc,num;
    do{
    printf("Suma de matrices\n");
    printf("Selecciona el tama%co de la matriz\n",164);
    printf("1. 2x2\n2. 3x3\n3. 5x5\n\n");
    scanf("%d",&opc);
    if(opc==1)
    {
        matriz2();   
    }
    if(opc==2)
    {
        matriz3();
    }
    if(opc==3)
    {
        matriz5();
    }
    if(opc<=0 || opc>3)
    {
        printf("Opci%cn inv%clida",162,160);
    }
    printf("\n\nPresiona 1 para continuar %c presiona cualquier tecla para salir\n",162);
    scanf("%d",&num);
    system("cls");
    }while(num==1);
}

int matriz2()
{
    int a,b;
    int m1[2][2],m2[2][2],m3[2][2];
    printf("Ingresa los n%cmeros de la matriz 1\n",163);
        for(a=0; a<2; a++)
        {
            for(b=0; b<2; b++)
            {
                scanf("%d",&m1[a][b]);
            }
        }
            printf("\n");
        for(a=0; a<2; a++)
            {
                for(b=0; b<2; b++)
                    {
                        printf("%d\t",m1[a][b]);
                    }
                    printf("\n");
            }//primera matriz
    printf("Ingresa los n%cmeros de la matriz 2\n",163);
        for(a=0; a<2; a++)
        {
            for(b=0; b<2; b++)
            {
                scanf("%d",&m2[a][b]);
                m3[a][b]=m1[a][b]+m2[a][b];
            }
        }
            printf("\n");
        for(a=0; a<2; a++)
            {
                for(b=0; b<2; b++)
                    {
                        printf("%d\t",m2[a][b]);
                    }
                    printf("\n");
            }//segunda matriz
    printf("\nLa suma de las matrices es:\n");
        for(a=0; a<2; a++)
            {
                for(b=0; b<2; b++)
                    {
                        printf("%d\t",m3[a][b]);
                    }
                    printf("\n");
            }//impresion del resultado   
                getch();
                return 0;
}

int matriz3()
{
    int c,d;
    int m1[3][3],m2[3][3],m3[3][3];
    printf("Ingresa los n%cmeros de la matriz 1\n",163);
        for(c=0; c<3; c++)
        {
            for(d=0; d<3; d++)
            {
                scanf("%d",&m1[c][d]);
            }
        }
            printf("\n");
        for(c=0; c<3; c++)
            {
                for(d=0; d<3; d++)
                    {
                        printf("%d\t",m1[c][d]);
                    }
                    printf("\n");
            }//primera matriz
    printf("Ingresa los n%cmeros de la matriz 2\n",163);
        for(c=0; c<3; c++)
        {
            for(d=0; d<3; d++)
            {
                scanf("%d",&m2[c][d]);
                m3[c][d]=m1[c][d] + m2[c][d];
            }
        }
            printf("\n");
        for(c=0; c<3; c++)
            {
                for(d=0; d<3; d++)
                    {
                        printf("%d\t",m2[c][d]);
                    }
                    printf("\n");
            }//segunda matriz
    printf("\nLa suma de las matrices es:\n");
        for(c=0; c<3; c++)
            {
                for(d=0; d<3; d++)
                    {
                        printf("%d\t",m3[c][d]);
                    }
                    printf("\n");
            }
            getch();
            return 0;
}

int matriz5()
{
    int e,f;
    int m1[5][5],m2[5][5],m3[5][5];
    printf("Ingresa los n%cmeros de la matriz 1\n",163);
    for(e=0; e<5; e++)
    {
        for(f=0; f<5; f++)
        {
            scanf("%d",&m1[e][f]);
        }
    }
        printf("\n");
    for(e=0; e<5; e++)
        {
            for(f=0; f<5; f++)
                {
                    printf("%d\t",m1[e][f]);
                }
                printf("\n");
        }//primera matriz
    printf("Ingresa los n%cmeros de la matriz 2\n",163);
        for(e=0; e<5; e++)
        {
            for(f=0; f<5; f++)
            {
                scanf("%d",&m2[e][f]);
                m3[e][f]=m1[e][f] + m2[e][f];
            }
        }
            printf("\n");
    for(e=0; e<5; e++)
        {
            for(f=0; f<5; f++)
                {
                    printf("%d\t",m2[e][f]);
                }
                printf("\n");
        }//segunda matriz
        printf("\nLa suma de las matrices es:\n");
        for(e=0; e<5; e++)
        {
            for(f=0; f<5; f++)
                {
                    printf("%d\t",m3[e][f]);
                }
                printf("\n");
        }//impresion del resultado
        getch();
        return 0;
}
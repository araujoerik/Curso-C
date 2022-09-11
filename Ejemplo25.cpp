#include "stdio.h"
#include "conio.h"

int main()
{
    int num;
    do{
        printf("\n Dame el numero par");
        scanf("%d",&num);
        if(num%2 ==0)&&(num != 0)
            printf("Error no es un numero par [Enter para continuar...]\n");
            getch();
    } while{
        ((num%2==0)&&(num != 0))
        printf("NUmero correcto\n");
     getch();
    }
}
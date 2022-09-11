#include "stdio.h"
#include "conio.h"

int main()
{
    int num, suma=0, prod=1;
    do{
        printf("Dame un numero \n");
        scanf("%d",&num);
        if(num%2==0)
        suma=suma+num;
        else
        prod=prod * num;
    }while ((suma <= 50)&&(prod <= 150));
        printf("La suma es %d, producto es %d", suma,prod);
        getch();   
}
#include "stdio.h"
#include "windows.h"
#include "ctype.h"
#include "conio.h"

int main()
{
    int flag=1;//Variable tipo bandera
    char car='\0';//car es para leer el caracter y se limpia de
    printf("\n Tu caracter debe ser una vocal en minuscula para terminar (a-u) \t");
    while(flag==1)//otra manera de preguntar while (flag)
    {
        printf("\n Dame un caracter \t");
        car=getche();
        if ((car='a')||(car=='e')||(car=='i')||(car=='o')||(car=='u'))
        {
            printf("\n Tu caracter es una vocal en minuscula \t");
            flag=0;//apaga bandera
        }
    }
    printf("\n");
    system("pause");
}
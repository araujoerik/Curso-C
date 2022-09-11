#include "stdio.h"
#include "windows.h"
#include "ctype.h"
#include "conio.h"

int main()

{
    int p, num; //Leer variable
    char resp='s';//Variable centinela
    p=1;
    while(resp=='s')
    {
        printf("\n Dame un numero \t");
        scanf("%d",&num);
        p=p*num;
        printf("\n ingresar otro numero [s/n]\t");
        resp=getche();
        resp=tolower(resp);
    }
    printf("\n El total de la multiplicacion es %d \t",p);
    printf("\n");
    system("pause");
}

#include "stdio.h"
#include "conio.h"

int main()
{
    int num;
    printf("\n Impresion del codigo ASCII\n");
    for(num=1; num<=255;num++)
    {
        printf("%d==>%c\n",num,num);
    }
    getch();
}
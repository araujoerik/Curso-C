/*Es aquella estructura que permite elegir entre dos o mas opciones, switch evalua la expresion 
que se encuentra dentro de los parentesis y el resultado se compara con valores alternativos. 
El switch en la expresion lleva implicito el operador igual, por lo que compara 
si la expresion es igual a alguna de las opciones. Por lo tanto, no se puede comparar 
utilizando otro operador relacional*/
/*
    Switch:Estructura selectiva multiple
*/

#include"stdio.h"
#include"windows.h"
#include"ctype.h"
#include"stdlib.h"
#include"conio.h"

int main()
{
    system ("color E2");
    int num;
    printf("Dame un numero \n");
    scanf("%d",&num);
    switch(num)
    {
        case 1: printf("Domingo\n"); 
        break;
        case 2: printf("Lunes\n"); 
        break;
        case 3: printf("Martes\n"); 
        break;
        case 4: printf("Miercoles\n"); 
        break;
        case 5: printf("Jueves\n"); 
        break;
        case 6: printf("Viernes\n"); 
        break;
        case 7: printf("Sabado\n"); 
        break;
        default: printf("Del uno al siete, sabe...");
        system("pause>null");
    }
}
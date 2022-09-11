#include "stdio.h"
#include "ctype.h"
#include "string.h"
#include "conio.h"
#include "locale.h"
#include "windows.h"

void may();
void esmin();
void esmay();
void esdig();
void esalnum();

int main()
{
    int opc,num;
    do{
    printf("    Cadenas de caracteres (Biblioteca ctype.h)   \n");
    printf("Elija una opci%cn\n",162);
    printf("1. toupper \n2. islower \n3. isupper \n4. isdigit \n5. isalnum \n\n");
    scanf("%d",&opc);
    switch(opc)
    {
        case 1:
        may();
        break;
        case 2:
        esmin();
        break;
        case 3:
        esmay();
        break;
        case 4:
        esdig();
        break;
        case 5:
        esalnum();
        break;
    }
    printf("\nPresiona 1 para continuar %c presiona cualquier tecla para salir\n",162);
    scanf("%d",&num);
    system("cls");
    }while(num==1);  
}

void may()
{
    setlocale(LC_CTYPE, "Spanish");
    char texto[]="un ejemplo de como se convierte en mayuscula";
    char str[100];
    printf("%s\n",texto);
    for(int i=0; texto[i]; i++)
    str[i]=toupper(texto[i]);
    printf("El texto en mayuscula es: %s\n",str);
    getch();
}

void esmin()
{
    char letra;
    printf("Escribe una letra (puedes utilizar may%csculas)\n",163);
    fflush(stdin);
    scanf("%c",&letra);
    if(islower(letra))
    {
        printf("%c es min%cscula\n",letra,163);
    }
    else
    {
        printf("%c no es min%cscula\n",letra,163);
    }
    getch();
}

void esmay()
{
    char let;
    printf("Escribe una letra (puedes utilizar min%csculas)\n",163);
    fflush(stdin);
    scanf("%c",&let);
    if(isupper(let))
    {
        printf("%c es may%cscula\n",163);
    }
    else
    {
        printf("%c no es may%cscula\n",163);
    }
    getch();
}

void esdig()
{
    char letter;
    printf("Escribe una letra o digito\n");
    fflush(stdin);
    scanf("%c",&letter);
    if(isdigit(letter))
    {
        printf("%c es un digito\n",letter);
    }
    else
    {
        printf("%c no es un digito\n",letter);
    }
    getch();
}

void esalnum()
{
    char ltr;
    printf("Escribe una letra o digito\n");
    fflush(stdin);
    scanf("%c",&ltr);
    if(isalnum(ltr))
    {
        printf("%c es un digito o una letra\n",ltr);
    }
    else
    {
        printf("%c no es un digito o una letra\n",ltr);
    }
    getch();
}
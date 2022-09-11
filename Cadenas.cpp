#include "string.h"
#include "windows.h"
#include "stdlib.h"
#include "stdio.h"

int main()
{
    int opc,num;
    do{
    printf("    Cadenas de caracteres   \n");
    printf("Elija una opci%cn\n",162);
    printf("1. strcat \n2. memcpy \n3. memset \n4. strcspn \n5. strrev \n\n");
    scanf("%d",&opc);
    if(opc==1)
    {
        char cad[20]={"Hola que tal "}; 
        char cad2[30];
        printf("\n%cCu%cl es tu nombre%c\n",168,160,63);
        fflush(stdin);
        gets(cad2);
        strcat(cad, cad2);
        puts(cad);
    }
    if(opc==2)
    {
        char nom[50];
        char frase[50];
        strcpy(frase,"Hola, cambiaremos toda la frase\n");
        printf("Antes de memcpy: %s\n", frase);
        printf("%cCu%cl es tu nombre%c\n",168,160,63);
        fflush(stdin);
        gets(nom);
        memcpy(frase, nom, strlen(nom)+1);
        printf("Despues de memcpy: %s\n", frase);
    }
    if(opc==3)
    {
        char str[50];
        strcpy(str,"Asignaremos nuevos valores a la cadena\n");
        puts(str);
        memset(str,'#',11);
        puts(str);
    }
    if(opc==4)
    {
        int longitud;
        char str1[50];
        char str2[50];
        printf("%cCu%cl es tu apellido%c\n",168,160,63);
        fflush(stdin);gets(str1);
        printf("%cCu%cl es tu nombre%c\n",168,160,63);
        fflush(stdin);
        gets(str2);
        longitud = strcspn(str1, str2);
        printf("La coincidencia esta en %d caracteres\n", longitud + 1);
    }
    if(opc==5)
    {
        char ape[15], ape2[15]; 
        char comp[40];
        printf("%cCu%cl es tu primer apellido%c\n",168, 160, 63);
        fflush(stdin);
        gets(ape);
        printf("%cCu%cl es tu segundo apellido%c\n",168, 160, 63);
        fflush(stdin);
        gets(ape2);
        strcat(ape, " ");
        strcat(ape, ape2);
        strcpy(comp,ape);
        printf("Tus apellidos invertidos se leen asi: %s",strrev(comp));
    }
    printf("\n\nPresiona 1 para continuar %c presiona cualquier tecla para salir\n",162);
    scanf("%d",&num);
    system("cls");
    }while(num==1);
}
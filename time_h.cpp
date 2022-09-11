#include "stdio.h"
#include "conio.h"
#include "time.h"

int main()
{
    time_t inicio,fin;
    inicio = time(NULL);
    getch();
    fin = time(NULL);
    printf("El tiempo en ejecucion del programa fue de %.2f segundos",difftime(fin,inicio));
}
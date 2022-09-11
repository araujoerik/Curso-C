#include "stdio.h"
#include "windows.h"

int main()
{
   int contador;
   printf( "\n   " );
   contador = 1; /* Inicialización del contador */
   while ( contador <= 5 )        /* Condición */
   {
      printf( "%d ", contador );   /* Salida */
      contador++;    /* Incremento del contador */
   }
   return 0;
}
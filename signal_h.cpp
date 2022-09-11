#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

static void catch_function(int signal) 
{
    puts("Senal captada");
}

int main(void) 
{
    if (signal(SIGINT, catch_function) == SIG_ERR) 
    {
        fputs("Se produjo un error al configurar un controlador de senal\n", stderr);
        return EXIT_FAILURE;
    }
    puts("Iniciando la atencion interactiva en senal");
    if (raise(SIGINT) != 0) 
    {
        fputs("Error al iniciar la señal\n", stderr);
        return EXIT_FAILURE;
    }
    puts("Saliendo");
}
#include"stdio.h"
#include"windows.h"

int main()

{
    int s=0;
    int c;
    printf("Imprime la suma de los numeros del 1-5");
    c=1;
    while(c <= 5);
    {
        s+=c;//s+=c
        c++;
    }
    printf("La suma de los 5 primeros numero es",s);
    system("pause<null");
}
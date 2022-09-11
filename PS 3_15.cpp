#include "stdio.h"
#include "windows.h"
#include "conio.h"

int main()
{
    int x,y,mcd;
	int n1,n2;
    do{	
	printf("M%cximo com%cn divisor de dos n%cmeros\n\n",160,163,163);
    printf("Pulsa 0 para terminar\n");
	printf("Digite primer n%cmero positivo:\n",163);
    fflush(stdin);
	scanf("%d", &x);
    (getchar()!='\n');
	printf("Digite segundo n%cmero positivo\n",163);
    fflush(stdin);
	scanf("%d", &y);
    (getchar()!='\n');
    n1=x;
	n2=y;
	while(n1!=n2){
		if (n1>n2)
		n1 -= n2;
		else
		n2 -= n1;
	}
	mcd=n1;
	printf("El M.C.D. de %d y %d es %d\n", x, y, mcd);
    getch();
    system("cls");
    }while(x!=0);
}
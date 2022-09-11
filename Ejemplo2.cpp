/*La suma de dos numeros*/

#include"stdio.h"
#include"windows.h"

int main()
{
	int n1,n2,r;
	printf("\n Dame el primer numero ");
	scanf("%d",&n1);
	printf("\n Dame el segundo numero ");
	scanf("%d",&n2);
	r=n1+n2;
	printf("\n La suma de %d+%d=%d",n1,n2,r);
	return 0;
}


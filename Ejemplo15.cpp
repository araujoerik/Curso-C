#include "stdio.h"
#include "windows.h"

int main()
{
	int i=1, s=0;
	while(i<=50)
	{
		printf("\t %d",i);
		s=s+i;//s+=1
		i=i+2;//i+=2
	}
	printf("\n La suma de los pares del 1 al 50 \t %d",s);
	system("pause>null");
}

/*
Calcula la calificacion final de un estudiante si la ponderacion en la materia es:
Examen 1:30%
Examen 2:50%
Examen 3:20%
*/

#include"stdio.h"
#include"windows.h"

int main()
{
	float calificacion,ex1=calificacion*.3,ex2=calificacion*.5,tarea=calificacion*.2;
	float calf=ex1+ex2+tarea;
	printf("Cual fue la calificacion de tu primer examen\n");
	scanf("%f",&ex1);
	printf("Cual fue la calificacion de tu segundo examen\n");
	scanf("%f",&ex2);
	printf("Cual es la calificacion de tus tareas\n");
	scanf("%f",&tarea);
	printf("La calificacion final es: %.2f",(ex1*3+ex2*.5+tarea*.2)/3);
}

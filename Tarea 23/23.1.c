/*
Manuel Iván Salgado Garduño 
Computadoras y Programacion
Tarea 23
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumnos{
	int edad;
	char nombre[60];
	char genero;
	char carrera[25];
	char noCuenta[10];
	};

typedef struct alumnos ALUMNO;

int main(int argc, char *argv[]) {
	
		ALUMNO var1;
	
	printf("Introduce la edad y presiona enter:\n");
	scanf("%d",&var1.edad);
	
	printf("Introduce el nombre y presiona enter:\n");
	fflush(stdin);
	gets(var1.nombre);
	
	
	printf("\nEdad:%d nombre:%s",var1.edad,var1.nombre);
	printf("\n\n");
	
	system("PAUSE");	
  return 0;
	
}

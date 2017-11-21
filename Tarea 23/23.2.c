/*
Manuel Iván Salgado Garduño
Computadoras y Programacion
Tarea 23
*/
#include <stdio.h>
#include <string.h>
#include "alumnos.h"
#define MAX 3

int main(int argc, char *argv[]) {
	
	
	
	ALUMNO lista [MAX];
	
	int j;
	for(j=0;j<MAX;j++){
		printf("Datos del alumno %d\n",j+1);
		lista[j]=nuevoAlumno();
	}
	
	for(j=0;j<MAX;j++){
		imprimeAlumno(lista[j]);
	}
	
	system("PAUSE");	
	return 0;
}

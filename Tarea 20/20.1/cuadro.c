/*
Manuel Iván Salgado Garduño
Computadoras y Programacion
Tarea No 20.1
*/
#include <stdio.h>
#include <stdlib.h>

void fnCuadro(int filas, int columnas);

int main(int argc, char *argv[]) {
	
	
	int filas,columnas;
	char cont;
	printf("Este programa imprime un cuadrado de simbolos del tama%co que el usuario especifique\n",164);
	do{
		
		printf("\nIngresa el numero de filas:\n");
		scanf("%i",&filas);
		printf("Ingresa el numero de columnas:\n");
		scanf("%i",&columnas);
	
		fnCuadro(filas,columnas);
		
		fflush(stdin);
		printf("-----------------------------------------\n");
		printf("%cQuieres construir otro cuadrado? (s/n)\n",168);
		scanf("%c",&cont);
		
	}while(cont=='s' || cont=='S');
	
	return 0;
}

void fnCuadro(int filas,int columnas){
	int i,j;
	printf("\n");
	for(i=1;i<=filas;i++){
			for(j=1;j<columnas;j++){
				printf(" + ");
			}
		printf(" +\n\n");
	}
}

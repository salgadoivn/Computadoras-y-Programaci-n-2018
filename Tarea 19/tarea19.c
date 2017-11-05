/*
Manuel Iván Salgado Garduño
Computadoras y Programacion
Tarea 19
*/
#include <stdio.h>
#include <stdlib.h>

void fnCuadrado(int horizontal,int vertical){
	int i,j;
	printf("\n");
	for(i=1;i<=horizontal;i++){
			for(j=1;j<vertical;j++){
				printf(" + ");
			}
		printf(" +\n\n");
	}
}

int main(int argc, char *argv[]) {
	
	int horizontal, vertical;
	char cont;
	printf("Este programa imprime un cuadrado de simbolos del tama%co que sea especificado por el usuario\n",164);
	do{
		printf("-----------------------------------------------------------------------------\n");
		printf("Ingresa el numero de filas:\n");
		scanf("%i",&horizontal);
		printf("Ingresa el numero de columnas:\n");
		scanf("%i",&vertical);
	
		fnCuadrado(horizontal, vertical);
		
		fflush(stdin);
		printf("-----------------------------------------\n");
		printf("%cQuieres construir otro cuadrado? \nPara si presione s, para no presionar dos veces enter\n",168);
		scanf("%c",&cont);
		
	}while(cont=='s' || cont=='S');
	
	system("PAUSE");
	return 0;
}

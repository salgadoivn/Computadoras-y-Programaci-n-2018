/*
Manuel Iván Salgado Garduño 
Computadoras y Programacion
Tarea No 20.2
*/
#include <stdio.h>
#include <stdlib.h>
#include "IVA.h"

int main(int argc, char *argv[]) {
	
	float cantidad=0,iva=0,total=0,subtotal=0;
	char cont;
	
	printf("Este programa calcula iva, total y subtotal de los numeros que el usuario ingrese\n");
	
	
		do{
			printf("\nIntroduce el iva (excluye el simbolo \"%%\")\n");
			scanf("%f",&iva);
			printf("introduce una cantidad\n");
			scanf("%f",&cantidad);
			subtotal=cantidad;
			total=fnIVA(iva,cantidad);
			printf("----------------------------------------\n");
			printf(" iva:       %.2f %% \n subtotal: %.2f $\n total:    %.2f $\n",iva,subtotal,total);
				
			fflush(stdin);
			printf("\n-----------------------------------\n");
			printf("%cDesea introducir otro numero? (s/n)\n",168);
			scanf("%c",&cont);	
		}while(cont=='s' || cont=='S');
	
	return 0;
}

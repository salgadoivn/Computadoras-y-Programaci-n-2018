/*
Manuel Iván Salgado Garduño 
Computadoras y Programación
Tarea #13
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num,a,b,c,d;
	do {
        printf("Este es un programa para hacer las siguientes operaciones aritmeticas:\n\n");
		printf("MENU\n");
		printf("\n 1)Suma.\n\n 2)Resta.\n\n 3)Salir.\n\n");
		printf("\nElija un opcion y presione enter:");
		scanf("%d",&num);
		switch (num)
		{
            case 1:
				printf("Inserte el primer valor y presione enter: ");
				scanf("%d",&a);
				printf("Inserte el segundo valor y presione enter: ");
				scanf("%d",&b);
				printf("\nLa suma de estos numeros es: %d\n\n",a+b);
			break;
			case 2:
                printf("Inserte el primer valor: ");
				scanf("%d",&c);
				printf("Inserte el segundo valor: ");
				scanf("%d",&d);
				printf("\nLa resta de estos numeros es: %d\n\n",c-d);
			
		}
	}
	while (num<=2);
  system("PAUSE");	
  return 0;
}

/*
Manuel Iván Salgado Garduño 
Computadoras y Programación
Programa Dias de la semana.
Tarea #9
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 
 int a;

 printf("Este es un programa para determinar el dia de la semana mediante numeros del 1 al 7\n");
 printf("introduce un numero y presiona enter:");
 scanf("%d",&a);
                switch(a)
                {
                 case 1:
                      printf("El dia es: Lunes\n");
                 break;
                 
                 case 2:
                      printf("El dia es: Martes\n");
                 break;
                 
                 case 3:
                      printf("El dia es: Miercoles\n");
                 break;

                 case 4:
                      printf("El dia es: Jueves\n");
                 break;

                 case 5:
                      printf("El dia es: Viernes\n");
                 break;

                 case 6:
                      printf("El dia es Sabado\n");
                 break;
                 
                 case 7:
                      printf("El dia es: Domingo\n");
                 break;
default:
printf("Sabes leer?\n");
}

  system("PAUSE");	
  return 0;
}

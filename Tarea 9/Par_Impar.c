/*
Manuel Iván Salgado Garduño 
Computadoras y Programación
Programa que determina si un numero entero es par o impar.
Tarea #9
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numero;
    
    printf("Este es un programa para determinar si un numero entero es par o impar\n");
    printf( "Introduzca un numero entero y presione enter: ");
    scanf( "%d", &numero );

    if ( numero % 2 == 0 )
        printf( "\n   ES PAR" );
    else
        printf( "\n   ES IMPAR" );

    getch(); 

    return 0;
  
  system("PAUSE");	
  return 0;
}

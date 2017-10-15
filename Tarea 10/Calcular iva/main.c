/*
Manuel Iván Salgado Garduño 
Computadoras y Programación
Programa para calcular el iva y precio total de un producto.
Tarea #10
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float precio, iva, total;
  
      printf("Esteprograma sirve para calcular el IVA de un producto\n");
     
      printf("\nEscriba el precio del producto: ");
      scanf("%f", &precio);
      
      printf("\n");
      iva=precio*0.16;
      printf("El valor del IVA del producto es de: %f", iva);
      printf("\n\n");
      total=precio+iva;
      printf("El valor del producto con el IVA incluido es de: %f\n\n", total);
      
  system("PAUSE");	
  return 0;
}

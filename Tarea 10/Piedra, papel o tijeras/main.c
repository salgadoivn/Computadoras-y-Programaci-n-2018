/*
Manuel Iván Salgado Garduño 
Computadoras y Programación
Juego piedra, papel o tijeras.
Tarea #10
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *variables[3] = {"Piedra", "Papel", "Tijeras"};
  int jugador, cpu;
  int partidas = 0, ganados = 0, empate = 0, perdidos = 0;
 
    do {
     
      printf("\n\t\t\t\t  Partidas jugadas / Juegos Ganados / Juegos Empatados / Juegos Perdidos\n");
      printf("\n\t\t\t\t     %d                 %d               %d               %d\n", partidas, ganados, empate, perdidos);
      
      
      printf("\n\n Piedra (1) - Papel (2) - Tijera (3)\n Elige una opcion y presiona enter: ");
      
      do
        scanf("%d", &jugador);
        
        while ((jugador == '\n') && (jugador != '1' || jugador != '2' || jugador != '3'));
        
        while (getchar()!= '\n');
        
        jugador--;
        cpu = rand() % 3;
        
        
        printf ("\n\n Jugando...\n");
        printf (" -----\n");
        printf ("\n Jugador:   %s" 
                "\n CPU:       %s"
                "\n Resultado:", variables[jugador], variables[cpu]);
        
        
        if (jugador == cpu){
          printf(" Empate\n");
          empate++;
          }
          
          else if ((jugador == 0 && cpu == 2)||(jugador == 1 && cpu == 0)||(jugador == 2 && cpu == 1)) {
               printf(" Gana Jugador\n");
               ganados++;
               }
               
          else {
               printf(" Gana CPU\n");
               perdidos++;
               }
        
        
        partidas++;
        
       
        printf ("\n\n\n Pulsa enter para volver a jugar");
        getchar();
        system ("CLS");
 
      }while (ganados < 5 && perdidos < 5);
      
      if (ganados > perdidos)
        printf ("\n Has ganado en %d intentos.", partidas);
      
        else
            printf ("\n Has perdido en %d intentos.", partidas);
            
            getchar();
  
  system("PAUSE");	
  return 0;
}

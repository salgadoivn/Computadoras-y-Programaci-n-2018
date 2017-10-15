#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  printf("Este programa imprime la tabla del 3\n");  
  int j=0;
   for(j=1; j<=10; j=j+1){
            printf("3x%d=%d\n", j,j*3);
            }
   printf("\n");
   printf("Fin del programa\n\n");
  system("PAUSE");	
  return 0;
}

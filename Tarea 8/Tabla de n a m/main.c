#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int inf=0;
  int sup=0;
  int j=0;
  printf("Escribe un numero:\n");
  scanf("%d", & inf);
  printf("Escribe un segundo numero:\n");
  scanf("%d", & sup);
  for(inf=inf;inf<=sup;inf=inf+1){
  for(j=1;j<=10;j=j+1){
      printf("           %dx%d=%d\n", inf,j,inf*j);
                                                     }
      printf("\n");
                                                     }
      printf("Fin del programa\n");
      
  system("PAUSE");	
  return 0;
}

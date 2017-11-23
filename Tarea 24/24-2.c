#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int datoLeido;
	
	FILE *ptrArchivo;
	ptrArchivo=fopen("datos.dat","rb");
	
	if(ptrArchivo==NULL){
		printf("Error al abrir el archivo\n");
	}else{
		while(!feof(ptrArchivo)){
			fscanf(ptrArchivo,"%d",&datoLeido);
			printf("Dato:%d\n",datoLeido);
		}
		fclose(ptrArchivo);
	}
	
	system("PAUSE");
	return 0;
}

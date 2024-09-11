#include <stdio.h>

int main(){
	FILE *archv;
	
	if((archv = fopen("prueba.txt", "r")) != NULL){
		printf("Archivo abierto con exito.\n");
		fclose(archv);
	} else {
		printf("Error.\n");
	}
	
	return 0;
}
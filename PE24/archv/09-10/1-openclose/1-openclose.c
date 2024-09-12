#include <stdio.h>

int main(){
	FILE *archv;
	
	// en VSCode "../prueba.txt" -> genera el .exe en "output/"
	// en DevC++ "prueba.txt" ---> genera el .exe en la misma carpeta
	
	if((archv = fopen("../prueba.txt", "r")) != NULL){
		printf("Archivo abierto con exito.\n");
		fclose(archv);
	} else {
		printf("Error.\n");
	}
	
	return 0;
}
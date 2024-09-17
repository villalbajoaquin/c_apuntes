// Programa que lea un texto guardado en un archivo e informe la cantidad
// de vocales almacenados en el.

#include <stdio.h>

int main(){
	FILE *fp;
	char c;
	int vocales = 0;

	fp = fopen("../vocales.txt", "r");
	
	if(fp != NULL){
		while(fscanf(fp, "%c", &c) != EOF){
			printf("%c", c);

			switch (c){
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U': vocales++; break;
			}
		}
		fclose(fp);
		printf("\nCantidad de vocales encontradas en el archivo de texto: %d", vocales);
	} else {
		printf("No existe el archivo.");
	}
	
	return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp;
	char cad[200];
	fflush(stdin);
	gets(cad);
	
	strcat(cad, "\n");
	
	if((fp = fopen("fichero.txt", "a")) != NULL){
		fputs(cad, fp);
		fclose(fp);
		printf("Agregado!");
	} else {
		printf("Error al agregar.");
	}
	
	return 0;
}
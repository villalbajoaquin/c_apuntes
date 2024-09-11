#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp;
	char cad[200];
	fflush(stdin);
	gets(cad);
	//fgets(cad, 199, stdin);
	
	if((fp = fopen("fichero.txt", "a")) != NULL){
		fprintf(fp, "\n%s", cad);
		fclose(fp);
		printf("Agregado!");
	} else {
		printf("Error al agregar.");
	}
	
	return 0;
}
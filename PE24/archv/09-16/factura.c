// Ingresando por teclado una lista de articulos (precio unitario y
// cantidad) genere un archivo de texto factura:

#include <stdio.h>

float precio(int, float, float*);

int main(){
	int b = 1, cant;
	float pUnit, tot = 0;
	char cod[5];
	FILE *f;
	
	f = fopen("../factura.txt", "wt");
	
	printf("\t--- FACTURERO ---\n");
	
	if(f != NULL){
		fprintf(f, "\t--- FACTURA ---\n\n\t\t\"B\"\n");
		fprintf(f, "\nCod.\t\tP. Unit\tCant.\tPrecio");
		
		while(b != 0){
			printf("\nIngrese codigo de producto: ");
			fflush(stdin);
			gets(cod);
			printf("\nIngrese precio unitario: $");
			scanf("%f", &pUnit);
			printf("\nIngrese cantidad vendida: ");
			scanf("%d", &cant);
			
			fprintf(f, "\n%s\t\t$%.2f\t%d\t$%.2f", cod, pUnit, cant, precio(cant, pUnit, &tot));
			
			printf("\nDesea continuar (0 para salir): ");
			scanf("%d", &b);
		}
		
		fprintf(f, "\n\nTOTAL COMPRA\t\t\t$%.2f", tot);
		
		fclose(f);
	} else {
		printf("\nError al abrir el archivo.");
	}
	
	return 0;
}

float precio(int c, float p, float *t){
	p *= c;
	*t += p; 	
	
	return p;
}
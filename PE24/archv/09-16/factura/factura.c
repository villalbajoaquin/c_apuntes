// Ingresando por teclado una lista de articulos (precio unitario y
// cantidad) genere un archivo de texto factura:

#include <stdio.h>
#include <stdlib.h>

float precio(int, float, float*);

int main(){
	int b = 1, cant;
	float pUnit, tot = 0;
	char cod[5], des[13];
	FILE *f;
	
	f = fopen("factura.txt", "wt");
	
	if(f != NULL){
		fprintf(f, "*************** FACTURA ***************\n\t\t\t\"B\"\n");
		fprintf(f, "FERRETERIA PE\nAv. Lavalle 2777, Posadas.\n");
		fprintf(f, "\nCod.\tDescripcion\t\t\tP. Unit\tCant.\t\tPrecio");
		
		while(b != 0){
			printf("\t****** FACTURERO ******\n");
			printf("\nIngrese codigo de producto: ");
			fflush(stdin);
			gets(cod);
			printf("\nIngrese nombre de producto: ");
			fflush(stdin);
			gets(des);
			printf("\nIngrese precio unitario: $");
			scanf("%f", &pUnit);
			printf("\nIngrese cantidad vendida: ");
			scanf("%d", &cant);
			
			if(pUnit < 10){
				fprintf(f, "\n%s\t%s\t\t\t$%.2f\t\t%d\t\t$%.2f", cod, des, pUnit, cant, precio(cant, pUnit, &tot));
			} else {
				fprintf(f, "\n%s\t%s\t\t\t$%.2f\t%d\t\t$%.2f", cod, des, pUnit, cant, precio(cant, pUnit, &tot));				
			}
			
			printf("\nDesea continuar (0 para salir): ");
			scanf("%d", &b);
			
			system("cls");
		}
		
		fprintf(f, "\n\nTOTAL COMPRA\t\t\t\t\t\t\t$%.2f", tot);
		printf("\nCompra realizada.");
		
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
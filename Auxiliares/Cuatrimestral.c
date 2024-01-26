// Cuatrimestral: tres actualizaciones (cada 4 meses).
#include<stdio.h>

int main(){
	float n, inicial, final, aumento, anualizado;
	
	printf("Ingrese el indice cuatrimestral (%%): ");
	scanf("%f", &n);
	printf("\nLuego, el monto inicial: $ ");
	scanf("%f", &inicial);
	
	final = inicial * (1 + (n / 100));
	final *=  (1 + (n / 100));
	final *=  (1 + (n / 100));
	aumento = final - inicial;
	anualizado = aumento / inicial * 100;
	
	printf("\nCon un aumento del %.2f porciento cuatrimestral, %.2f anualizado\n", n, anualizado);
	printf("\nel monto luego de 12 meses sera de: $ %.2f,\n", final);
	printf("\nsiendo un incremento de $ %.2f \n", aumento);
		
	return 0;
}

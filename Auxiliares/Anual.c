// Anual: actualizacion por unica vez (cada 12 meses).
#include<stdio.h>

int main(){
	float n, inicial, final, aumento;
	
	printf("Ingrese el indice anual (%%): ");
	scanf("%f", &n);
	printf("\nLuego, el monto inicial: $ ");
	scanf("%f", &inicial);
	
	final = inicial * (1 + (n / 100));
	aumento = final - inicial;
	
	printf("\nCon un aumento del %.2f porciento anual,\n", n);
	printf("\nel monto luego de 12 meses sera de: $ %.2f,\n", final);
	printf("\nsiendo un incremento de $ %.2f \n", aumento);
		
	return 0;
}

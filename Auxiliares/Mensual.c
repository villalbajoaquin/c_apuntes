// Mensual: doce actualizaciones (cada mes).
#include<stdio.h>

int main(){
	float n, inicial, final, aumento, anualizado;
	
	printf("Ingrese el indice mensual (%%): ");
	scanf("%f", &n);
	printf("\nLuego, el monto inicial: $ ");
	scanf("%f", &inicial);
	
	final = inicial * (1 + (n / 100)); //1
	final *=  (1 + (n / 100)); //2
	final *=  (1 + (n / 100)); //3
	final *=  (1 + (n / 100)); //4
	final *=  (1 + (n / 100)); //5
	final *=  (1 + (n / 100)); //6
	final *=  (1 + (n / 100)); //7
	final *=  (1 + (n / 100)); //8
	final *=  (1 + (n / 100)); //9
	final *=  (1 + (n / 100)); //10
	final *=  (1 + (n / 100)); //11
	final *=  (1 + (n / 100)); //12
	aumento = final - inicial;
	anualizado = aumento / inicial * 100;
	
	printf("\nCon un aumento del %.2f porciento mensual, %.2f anualizado\n", n, anualizado);
	printf("\nel monto luego de 12 meses sera de: $ %.2f,\n", final);
	printf("\nsiendo un incremento de $ %.2f \n", aumento);
		
	return 0;
}

// Funcion en C que retorne el arancel que va a pagar una determinada
// familia segun:

//  MIEMBROS		VALOR
//		3		base - 10%
//	  4 o 5		monto base
//		6		base + 12%
//		> 6		base + 16%

#include <stdio.h>

float cuota(int, float);

int main(){
	int miembros;
	float monto;
	
	printf("\t\t --- CALCULADOR DE CUOTA ---\n\n");
	printf("Ingrese la cantidad de miembros de su familia: ");
	scanf("%d", &miembros);
		
	while(miembros > 0){
		if(miembros > 2){
			printf("Ingrese el valor del monto base: $ ");
			scanf("%f", &monto);
			printf("El valor de la cuota sera de: $ %.2f", cuota(miembros, monto));
		} else {
			printf("\nNo se considera grupo familiar.");
		}
		
		printf("\nIngrese la cantidad de miembros de su familia (0 para salir): ");
		scanf("%d", &miembros);
			
		if(miembros > 2){
			printf("Ingrese el valor del monto base: $ ");
			scanf("%f", &monto);
		} else {
			printf("\nNo se considera grupo familiar.");
		}	
	}
		
	printf("\nMuchas gracias.");
	
	return 0;
}

float cuota(int n, float base){
	
	if (n == 3){
		base *= 0.9;
	} else if (n == 6){
		base *= 1.12;
	} else if (n > 6){
		base *= 1.16;
	}
	
	return base;
}
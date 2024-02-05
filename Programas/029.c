// 25. Condicionales. Ejercicio propuesto:
// k) Seleccionar un tipo de vehiculo e indicar el peaje segun su numero.
/*
   1 - turismo: $500
   2 - autobus: $3000
   3 - motocicleta: $300
otro - vehiculo no autorizado.
*/

#include<stdio.h>

int main(){
	int num;
	
	printf("\nIngrese el numero segun el tipo de vehiculo:\n");
	printf("\n1 - Turismo.\n");
	printf("\n2 - Autobus.\n");
	printf("\n3 - Motocicleta.\n");
	scanf("%i", &num);
	
	printf("\nTarifa a pagar:\n");
	
	switch(num){
		case 1: printf("\n$500"); break;
		case 2: printf("\n$3000"); break;
		case 3: printf("\n$300"); break;
		default: printf("\nError. Vehiculo no autorizado.");
	};
		
	return 0;
}

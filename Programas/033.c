// 27. Condicionales. Ejercicio propuesto:
// o) Hacer un menu que considere las siguientes opciones:
/*
	caso 1: cubo de un numero,
	caso 2: numero par o impar,
	caso 3: salir.
*/

#include<stdio.h>

int main(){
	int num, cubo, opcion;
	
	printf("\tMenu - Matematicas:\n");
	printf("\nIngrese un numero: ");
	scanf("%i", &num);
	
	printf("\nElija la operacion a realizar:\n");
	printf("\n1. Elevarlo al cubo\n");
	printf("\n2. Determinar si es par o impar\n");
	printf("\n3. Salir\n");
	printf("\nOpcion: ");
	scanf("%i", &opcion);
	
	switch(opcion){
		case 1: cubo = num * num * num;
				printf("\n%i elevado al cubo es: %i", num, cubo);
				break;
		case 2: if(num % 2 == 0){
					printf("\n%i es un numero par.", num);
				} else {
					printf("\n%i es un numero impar.", num);
				};
				break;
		case 3: printf("\nMuchas gracias."); break;
		default: printf("\nHubo un problema, no coincide con una opcion valida.");
	};
		
	return 0;
}

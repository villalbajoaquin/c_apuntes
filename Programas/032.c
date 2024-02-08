// 27. Condicionales. Ejercicio:
// n) Hacer un programa que simule un menu de cajero automatico,
// con un saldo inicial de U$S1000.

#include<stdio.h>

int main(){
	int opcion;
	float agregar, retirar, saldo = 1000;
	
	printf("\tMenu - Cajero Automatico:\n");
	printf("\nSaldo inicial: $ %.2f\n", saldo);
	printf("\n1. Realizar un deposito\n");
	printf("\n2. Retirar dinero de la cuenta\n");
	printf("\n3. Salir\n");
	printf("\nOpcion: ");
	
	scanf("%i", &opcion);
	
	switch(opcion){
		case 1: printf("\nIngrese el monto a depositar: $ ");
				scanf("%f", &agregar);
				saldo += agregar;
				printf("\nDeposito realizado.");
				printf("\nSaldo: $ %.2f", saldo);
				break;
		case 2: printf("\nIngrese el monto a retirar: $ ");
				scanf("%f", &retirar);
				if(retirar > saldo){
					printf("\nNo posee saldo para realizar el retiro.");
				} else {
					saldo -= retirar;
					printf("\nRetiro realizado.");
					printf("\nSaldo: $ %.2f", saldo);
				};
				break;
		case 3: printf("\nMuchas gracias."); break;
		default: printf("\nHubo un problema, no coincide con una opcion valida.");
	};
		
	return 0;
}

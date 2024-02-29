// 38. Ciclos/Bucles. Repeticion: el bucle do... while.
/*
	do {
		Instrucciones...
	} while();
*/

#include<stdio.h>

int main(){
	char opc;
	
	do {
		fflush(stdin);
		printf("Hola!");
		printf("\nEscriba 's' para saludar nuevamente: ");
		scanf("%c", &opc);
	} while(opc == 's' || opc == 'S');
	
	printf("\nMuchas gracias.");
	
	return 0;
}

// 24. Condicionales. La sentencia switch.
/*
	switch(selector){
		case x: contenido; break;
		case y: contenido; break;
		case z: contenido; break;
		default: contenido;
	}
*/

#include<stdio.h>

int main(){
	// Ejemplo 1: int.
	int num;
		
	printf("\nIngrese un numero del 1 al 3.\n");
	scanf("%i", &num);
	
	switch(num){
		case 1: printf("\nNumero 1"); break;
		case 2: printf("\nNumero 2"); break;
		case 3: printf("\nNumero 3"); break;
		default: printf("\nHubo un problema, no es un numero del 1 al 3");
	};
	
	fflush(stdin); // para 'limpiar el buffer'.
	// Ejemplo 2: char.
	char vocal;
	
	printf("\n------------------\n");
	printf("\nIngrese una vocal.\n");
	scanf("%c", &vocal);
	
	switch(vocal){
		case 'a': printf("\nVocal A"); break;
		case 'e': printf("\nVocal E"); break;
		case 'i': printf("\nVocal I"); break;
		case 'o': printf("\nVocal O"); break;
		case 'u': printf("\nVocal U"); break;
		default: printf("\nHubo un problema, no es una vocal.");
	};
		
	return 0;
}

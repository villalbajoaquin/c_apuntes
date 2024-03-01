// 39. Ciclos/Bucles. Ejercicio: 
// n) Hacer un bucle do... while para imprimir las minusculas del alfabeto.

#include<stdio.h>

int main(){
	char letra = 'a';
	
	
	printf("\t- LETRAS DEL ALFABETO -\n");
	
	do {
		printf("%c, ", letra);
		letra++;
	} while(letra <= 'z');
	
	printf("\nMuchas gracias.");
	
	return 0;
}

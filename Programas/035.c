// 29. Ciclos/Bucles. La sentencia while.
/*
	while(condicion){
		Expresion
	}
*/

#include<stdio.h>

int main(){
	// Ej: 1 al 10.
	int i = 1;
	
	while(i <= 10){
		printf("%i\n", i);
		i++; // Incremento de a uno.
	};
	
	printf("------\n", i);
	
	// Ej: 10 al 1.
	i = 10;
	
	while(i >= 1){
		printf("%i\n", i);
		i--; // Decremento de a uno.
	};
	
	printf("------\n", i);
	
	// Ej: 5 arsteriscos '*'.
	i = 1;
	
	while(i <= 5){
		printf("*");
		i++; // Decremento de a uno.
	};
		
	return 0;
}

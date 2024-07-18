// 33. Ciclos/Bucles. El bucle for.
/*
	for(selector; condicion; incremento){
		Expresion
	};
*/

#include<stdio.h>

int main(){
	// Ej: 1 al 10.
	int i;
	
	for(i = 1; i <= 10; i++){
		printf("%i\n", i);
	};
	
	printf("------\n");
	
	// Ej: 10 al 1.
	for(i = 10; i >= 1; i--){
		printf("%i\n", i);
	};
	
	printf("------\n");
	
	// Ej: 5 arsteriscos '*'.
	for(i = 1; i <= 5; i++){
		printf("*");
	};
		
	return 0;
}

// 33. Ciclos/Bucles. El bucle for.
/*
	for(selector; condicion; incremento){
		Expresion
	};
*/

#include<stdio.h>

int main(){
	// Ej: 1 al 10.
	int i = 1;
	
	for(i; i <= 10; i++){
		printf("%i\n", i);
	};
	
	printf("------\n", i);
	
	// Ej: 10 al 1.
	i = 10;
	
	for(i; i >= 1; i--){
		printf("%i\n", i);
	};
	
	printf("------\n", i);
	
	// Ej: 5 arsteriscos '*'.
	i = 1;
	
	for(i; i <= 5; i++){
		printf("*");
	};
		
	return 0;
}

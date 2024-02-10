// 28. Condicionales. El operador '?' (if-ternario).
/*
	Condicion ? Expresion1 : Expresion2
*/

#include<stdio.h>

int main(){
	// Ej: numero par
	int num;
	
	printf("\nIngrese un numero: ");
	scanf("%i", &num);
	
	(num % 2 == 0) ? printf("\n%i es un numero par.", num) : printf("\n%i es un numero impar.", num);
		
	return 0;
}

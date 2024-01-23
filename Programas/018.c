// 18. Condicionales. Ejercicio propuesto: 
// b) Comprobar si el numero ingresado es positivo o negativo.

#include<stdio.h>

int main(){
	int n;
	
	printf("Ingrese un numero: ");
	scanf("%i", &n);
	
	if(n > 0){
		printf("\n %i es un numero positivo", n);
	};
	
	if(n < 0){
		printf("\n %i es un numero negativo", n);
	};
	
	if(n == 0){
		printf("\nEl %i no es positivo ni negativo", n);
	};
	
	return 0;
}

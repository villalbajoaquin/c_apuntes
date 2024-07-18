// 36. Ciclos/Bucles. Ejercicio:
// j) Factorial de un numero.

#include<stdio.h>

int main(){
	int i, n, factorial = 1;
	
	printf("Ingrese el numero para hallar el factorial: ");
	scanf("%i", &n);
	
	for(i = 1; i <= n; i++){
		factorial *= i;
	};
	
	printf("\nEl factorial de %i es: %i", n, factorial);
	
	return 0;
}

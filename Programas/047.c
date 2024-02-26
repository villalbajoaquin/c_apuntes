// 36. Ciclos/Bucles. Ejercicio propuesto:
// k) Calcular la suma de factoriales.

#include<stdio.h>

int main(){
	int i, n1, n2, factorial1 = 1, factorial2 = 1, suma;
	
	printf("Ingrese los numeros para hallar la suma de sus factoriales: ");
	scanf("%i %i", &n1, &n2);
	
	for(i = 1; i <= n1; i++){
		factorial1 *= i;
	};
	
	for(i = 1; i <= n2; i++){
		factorial2 *= i;
	};
	
	suma = factorial1 + factorial2;
	
	printf("\nLa suma de los factoriales de %i y %i es: %i", n1, n2, suma);
	
	return 0;
}

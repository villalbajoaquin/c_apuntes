// 11. Operadores. Ejercicio operaciones aritmeticas
// a) Pedir 2 nros. al usuario y sumarlos, restarlos, multiplicarlos y dividirlos

#include<stdio.h>

int main(){
	int n1, n2, suma, resta, mult, div;
	suma = resta = mult = div = 0;
	
	printf("Ingrese el primer numero: ");
	scanf("%i", &n1);
	printf("Ingrese el segundo numero: ");
	scanf("%i", &n2);
	
	/*
	printf("Ingrese dos numeros: ");
	scanf("%i %i", &n1, &n2); // Alternativa mas resumida
	*/
	
	suma = n1 + n2;
	resta = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	printf("\nEl resultado de la suma es: %i", suma);
	printf("\nEl resultado de la resta es: %i", resta);
	printf("\nEl resultado de la multiplicacion es: %i", mult);
	printf("\nEl resultado de la division es: %i", div);
	
	return 0;
}

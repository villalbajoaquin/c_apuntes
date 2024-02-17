// 32. Ciclos/Bucles. Ejercicio:
// e) Sumar 1-2+3-4+5...n.
/*
	impares(+) = -2-4-6..., pares(-) = 1+3+5
	
	suma = pares + impares = 1 - 2 + 3 - 4 + 5 - 6
	= -1 + 3 - 4 + 5 - 6 = 2 - 4 + 5 - 6 =
	= -2 + 5 - 6 = 3 - 6 = -3
*/

#include<stdio.h>

int main(){
	int i = 1, n, neg, suma = 0, pares = 0, impares = 0;
	
	printf("Ingrese el total de numeros a sumar: ");
	scanf("%i", &n);
	
	printf("\nSuma de impares y resta de impares,\n");
	printf("desde el 1 hasta el %i: \n", n);
	
	while(i <= n){
		if(i % 2 == 0){
			neg = (-i);
			pares += neg;
		} else {
			impares += i;
		};
		i++;
	};
	
	suma = pares + impares;
	
	printf("\nLa suma total da: %i", suma);
		
	return 0;
}

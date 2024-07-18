// 37. Ciclos/Bucles. Ejercicio propuesto:
// m) Imprimir la suma de todos los numeros pares que hay desde
// el 1 hasta n, y diga cuantos numeros hay.

#include<stdio.h>

int main(){
	int n, i, pares = 0, suma = 0;
	
	printf("Ingrese el numero limite de la suma: ");
	scanf("%i", &n);
	
	for(i = 1; i <= n; i++){
		if(i % 2 == 0){
			suma += i;
			pares++;
		};
	};
	
	printf("\nLa suma de todos los pares desde el 1 hasta el %i es: %i", n, suma);
	printf("\nCantidad de numeros iterados: %i, pares: %i", n, pares);
	
	return 0;
}

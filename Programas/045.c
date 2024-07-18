// 35. Ciclos/Bucles. Ejercicio:
// i) Determinar si un numero es primo o no.

#include<stdio.h>

int main(){
	int i, n, cont = 0;
	
	printf("i) Determinar si un numero es primo o no.\n");
	printf("Ingrese el numero: ");
	scanf("%i", &n);
	
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			cont++;
		};
	};
	
	if(cont > 2){
		printf("\nEl numero es compuesto.");
	} else {
		printf("\nEl numero es primo.");
	};
	
	return 0;
}

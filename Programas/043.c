// 34. Ciclos/Bucles. Ejercicio:
// g) Suma de los primeros 10 numeros pares.

#include<stdio.h>

int main(){
	int i, suma = 0;
	
	for (i=0; i <= 10; i += 2){
		suma += i;
	};
	
	printf("\nLa suma de los numeros pares es: %i", suma);
		
	return 0;
}

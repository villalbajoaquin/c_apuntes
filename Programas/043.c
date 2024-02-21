// 34. Ciclos/Bucles. Ejercicio:
// g) Suma de los primeros 10 numeros pares.

#include<stdio.h>

int main(){
	int i = 0, suma = 0;
	
	for(i; i <= 10; i += 2){
		suma += i;
	};
	
	printf("\nLa suma de los numeros pares es: %i", suma);
		
	return 0;
}

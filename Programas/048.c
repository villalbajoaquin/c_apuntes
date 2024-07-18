// 37. Ciclos/Bucles. Ejercicio:
// l) Serie Fibonacci.

//	1 2 3 5 8 13

#include<stdio.h>

int main(){
	int n, i, x = 0, y = 1, z = 1;
	
	printf("Ingrese el numero de elementos: ");
	scanf("%i", &n);
	
	printf("1");
	
	for(i = 1; i < n; i++){
		z = x + y; // z = 0 + 1 = 1; z = 1 + 1 = 2  
		x = y; // cambio x = 1;     cambio x = 1
		y = z; // asigno y = z = 1; asigno y = z = 2
		
		printf(", %i", z);
	};
	
	return 0;
}

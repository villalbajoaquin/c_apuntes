// 30. Ciclos/Bucles. Ejercicio:
// a) Suma de los n primeros numeros.

#include<stdio.h>

int main(){
	int i = 1, n, suma = 0;
	
	printf("Ingrese la cantidad de numeros a sumar: ");
	scanf("%i", &n);
	
	while(i <= n){
		suma += i; // suma = (0+1) 1, (1+2) 3, (3+3) 6, (6+4) 10, ...
		i++;
	};
	
	printf("\nLa suma da: %i", suma);
		
	return 0;
}

// 19. Condicionales. Ejercicio propuesto: 
// d) Determinar si un numero es par o impar.

#include<stdio.h>

int main(){
	int n;
	
	printf("Ingrese el numero a evaluar: ");
	scanf("%i", &n);
	
	if(n % 2 == 0){
		printf("\n%i es par ", n);
	};
	
	if(n % 2 != 0){
		printf("\n%i es impar ", n);
	};
		
	return 0;
}

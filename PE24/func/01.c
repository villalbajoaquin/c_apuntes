#include <stdio.h>

int cuad(int);

int main(){
	int x;
	
	printf("Ingrese un numero para calcular su cuadrado: ");
	scanf("%d", &x);
	
	printf("El cuadrado de %d es: %d", x, cuad(x));
	
	return 0;
}

int cuad(int n){
	n *= n;
	
	return n;
}
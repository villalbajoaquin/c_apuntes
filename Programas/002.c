// 7. Directivas del prepocesador y variables.

#include<stdio.h> // Libreria

#define PI 3.1416 // Macro

int y = 5; // Variable global entera

int main(){
	int x = 10; // Variable local entera
	
	float suma = 0; // Variable local flotante (real)
	
	suma = PI + x;
	
	printf("La suma es: %.3f", suma);
	
	return 0;
}

// 10. Operador de asignacion

#include<stdio.h>

int main(){
	int a;
	a = 10; // Operador de asignacion
	
	printf("El valor de a es: %i \n", a);
	
	int b, c, d;
	b = c = d = 10; // Asigno a varias variables el mismo valor
	
	printf("--------------------------------\n");
	printf("Los valores de las variables son: b = %i, c = %i, d = %i \n", b, c, d);
	
	int e;
	e = 10;
	e += 5; // Auto-operadaor, (e = e + 5), suma
	
	printf("--------------------------------\n");
	printf("El valor incrementado de e es: %i \n", e);
	
	int f;
	f = 10;
	f -= 5; // e = e - 5, resta
	
	printf("--------------------------------\n");
	printf("El valor decrementado de f es: %i \n", f);
	
	int g;
	g = 10;
	g *= 2; // g = g * 2, multiplicacion
	
	printf("--------------------------------\n");
	printf("El valor multiplicado de g es: %i \n", g);
	
	int h;
	h = 10;
	h /= 2; // h = h / 2, division
	
	printf("--------------------------------\n");
	printf("El valor dividido de h es: %i", h);
	
	return 0;
}

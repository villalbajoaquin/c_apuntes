// 16. Operadores. Ejercicio propuesto.
// j) Hacer un programa que obtenga la media geometrica
// de tres numeros ingresados por el usuario.

#include<stdio.h>
#include<math.h>

int main(){
	float n1, n2, n3, mg;
	
	printf("Ingrese los tres numeros para obtener su media geometrica: \n");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	mg = pow( (n1 * n2 * n3), .333333);
	
	printf("\nLa media geometrica de la serie resulta de: %.2f", mg);
	
	return 0;
}

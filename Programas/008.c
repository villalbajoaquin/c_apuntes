// 13. Operadores. Ejercicio areas de trapecios
// c) Hacer un programa que calcule areas de trapecios
// Area = (B + b) * h / 2

#include<stdio.h>

int main(){
	int base_M, base_m, area, h;
	
	printf("Ingrese los siguientes valores en cm: \n");
	
	printf("Base mayor: ");
	scanf("%i", &base_M);
	printf("Base menor: ");
	scanf("%i", &base_m);
	printf("Altura: ");
	scanf("%i", &h);
	
	area = ((base_M + base_m) * h / 2);
	
	printf("\nEl area del trapecio es: %i", area);
		
	return 0;
}

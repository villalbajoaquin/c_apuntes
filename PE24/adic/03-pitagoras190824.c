// Desarrollar una funcion en C donde dados los catetos de un triangulo
// rectangulo devuelva el valor de la hipotenusa segun el teorema de
// Pitagoras. Todos los valores son de tipo real.

#include <stdio.h>
#include <math.h>

float hip(float, float);

int main(){
	float c1, c2;
	printf("Ingrese los valores de los catetos:\n");
	printf("C1: ");
	scanf("%f", &c1);
	printf("C2: ");
	scanf("%f", &c2);
	
	printf("El valor de la hipotenusa es %.2f", hip(c1, c2));
	
	return 0;
}

float hip(float x, float y){
	float res;
	
	res = sqrt((x*x) + (y*y));
	
	return res;
}
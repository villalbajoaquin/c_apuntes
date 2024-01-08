// 8. Tipos de Datos

#include<stdio.h>

int main(){
	
	char a = 'h'; // caracter, rango: 0...255
	short b = -15; // num. corto, rango: -128...127
	int c = 1024; // entero, rango: -32768...32767
	unsigned int d = 128; // entero natural, rango: 0...65535
	long e = 123456; // entero largo, rango: +-(10 cifras)
	float f = 15.487; // flotante (6 decimales)
	double g = 427.15897563; // hasta 14 decimales
	
	printf("Este es un caracter: %c\n", a);
	printf("Este es un numero corto: %i\n", b);
	printf("Este es un numero entero: %i\n", c);
	printf("Este es un numero entero positivo: %i\n", d);
	printf("Este es un numero entero largo: %li\n", e);
	printf("Este es un numero flotante decimal: %.3f\n", f);
	printf("Este es un numero decimal mas preciso: %lf", g);
	
	// \n para el salto de linea en la consola
	
	return 0;
}

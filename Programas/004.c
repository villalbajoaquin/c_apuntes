// 9. Entradas y salidas de datos:

#include<stdio.h>

int main(){
	
	int dato = 10;
	
	printf("El valor del dato es: %i\n", dato); // Salida con un solo dato
	
	int a = 0;
	float b  = 15.5;
	char c = 'j';
	
	printf("--------------------------------\n");
	printf("Varios datos: %i, %f, %c \n", a, b, c); // Salida con varios datos
	
	int d;
	float e;
	char f;
	
	printf("--------------------------------\n");
	printf("Digite el valor de la variable d: \nDebe ser un numero entero. ");
	scanf("%i", &d); // Entrada de un int
	printf("--------------------------------\n");
	printf("Digite el valor de la variable e: \nDebe ser un numero con decimales. ");
	scanf("%f", &e); // Entrada de un float
	printf("--------------------------------\n");
	printf("Digite el valor de la variable f: \nDebe ser una letra. ");
	scanf("%s", &f); // Entrada de un char, de un solo caracter
	
	printf("Los valores son:\nd: %i\ne: %f\nf: %c \n", d, e, f);
	
	char nombre[15];
	
	printf("--------------------------------\n");
	printf("Por favor, ingrese su nombre: ");
	scanf("%s", nombre); // Entrada de un char de varios caracteres
	// scanf solo lee caracteres hasta encontrar un espacio.
	
	printf("Su nombre es: %s \n", nombre);
	
	/* A CORREGIR DEBIDO A QUE NO PUEDE INGRESAR LA CADENA DE TEXTO, SOLO PASA DE ELLA
	
	char completo[50];
	
	printf("--------------------------------\n");
	printf("Por favor, ingrese sus nombres y apellidos: ");
	gets(completo);
	
	printf("Su nombre completo es: %s", completo);
	*/
	
	return 0;
}

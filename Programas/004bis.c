// 9. Entradas y salidas de datos:

#include<stdio.h>

int main(){
	
	char completo[50];
	
	printf("--------------------------------\n");
	printf("Por favor, ingrese sus nombres y apellidos: ");
	gets(completo); // Entrada de una cadena con espacios, a diferencia de scanf
	// gets lee una linea completa de caracteres.
	
	printf("Su nombre completo es: %s", completo);
	
	return 0;
}

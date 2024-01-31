// 22. Condicionales. Ejercicio propuesto:
// h) Ingrese el nombre, edad y sexo de la persona e imprima, solo si es
// masculino y mayor de edad, su nombre.

#include<stdio.h>

int main(){
	char nombre[30], sexo[1];
	int edad;
	
	printf("Ingrese su nombre: ");
	scanf("%s", &nombre);
	printf("Ingrese su edad: ");
	scanf("%i", &edad);
	printf("Ingrese su sexo (M/F): ");
	scanf("%s", &sexo);
	
	if(strcmp(sexo, "M") == 0 && edad >= 18){
		printf("\nHola, %s! Eres un hombre adulto", nombre);
		// falta q imprima el nombre
	} else {
		printf("\nBienvenido!");
	};
		
	return 0;
}

// 22. Condicionales. Ejercicio:
// g) Ingrese el nombre y signo de la persona e imprima, su nombre solo si es
// de aries, caso contrario imprima 'no es de aries'.

#include<stdio.h>

int main(){
	char nombre[30], signo[20];
	
	printf("Ingrese su nombre: ");
	gets(nombre);
	printf("Ingrese su signo: ");
	gets(signo);
	
	if(strcmp(signo, "aries") == 0){
		//strcmp() para poder comparar cadenas
		printf("\nHola, %s! Eres de aries", nombre);
	} else {
		printf("\nNo es de aries.");
	};
		
	return 0;
}

// Funcion que reciba un puntero a una str que representa una
// ecuacion matematica simple, la cual incluye la representacion
// de los operadores, nums y "()". Determinar si dicha ecuacion
// tiene equilibrados sus "()".

#include <stdio.h>

int eq(char *);

int main(){
	char ecuacion[20], *s;
	
	printf("Ingrese su ecuacion: ");
	gets(ecuacion);
	
	s = &ecuacion[0];
	
	if(eq(s) == 0){
		printf("Ecuacion equilibrada.");
	} else if(eq(s) > 0) {
		printf("Falta cerrar parentesis.");
	} else {
		printf("Cerraste un parentesis que no abriste");
	}
	
	return 0;
}

int eq(char *s){
	int r = 0, i = 0;
	
	while(*(s+i) != '\0' && r >= 0){
		if(*(s+i) == '('){
			r += 1;
		} else if(*(s+i) == ')'){
			r -= 1;
		}
		
		i++;
	}
	
	return r;
}
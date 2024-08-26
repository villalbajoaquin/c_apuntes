// Desarrollar una funcion que devuelva si un numero
// ingresado como parametro es primo.

#include <stdio.h>

int primo(int);

int main(){
	int i;
	
	printf("\t--- NUMEROS PRIMOS ---\n");
	printf("Ingrese el numero (>1) a evaluar: ");
	scanf("%d", &i);
	
	while(i > 1){
		switch(primo(i)){
			case 0: printf("%d primo.", i); break;
			case 1: printf("%d compuesto.", i);
		}
		
		printf("\nIngrese otro numero (>1) a evaluar: ");
		scanf("%d", &i);
		
		if(i < 2){
			printf("\nError. Numero es 1 o menor.\n");
		}
	}
	
	printf("\nFin del programa.");
	
	return 0;
}

int primo(int n){
	int r, b = 0, x = 2;
	
	if(n > 1){
		while(x < n && b == 0){
			if(n % x == 0){
				b = 1;
			}
			x++;
		}
		if(b == 1){
			r = 1;
		} else {
			r = 0;
		}
	} else {
		r = 2;
	}
	
	return r;
}
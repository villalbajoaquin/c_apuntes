// 34. Ciclos/Bucles. Ejercicio propuesto:
// h) Hacer un arbol con '*'. Ej:
/*
	Ingrese el numero de filas: 5
	*
	**
	***
	****
	*****
*/
#include<stdio.h>

int main(){
	int i = 1, j, n;
	
	printf("Ingrese el numero de filas: ");
	scanf("%i", &n);
	
	for(i; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("*");
		};
		printf("\n");
	};
	
	return 0;
}

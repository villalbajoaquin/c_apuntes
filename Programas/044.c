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
	int i, j, n;
	
	printf("Ingrese el numero de filas: ");
	scanf("%i", &n);
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("*");
		};
		printf("\n");
	};
	
	return 0;
}

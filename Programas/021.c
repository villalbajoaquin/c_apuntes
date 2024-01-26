// 20. Condicionales. Seleccion doble if-else: nota del estudiante.

#include<stdio.h>

int main(){
	float n;
	
	printf("Ingrese la nota del examen: ");
	scanf("%f", &n);
	
	if(n >= 6){
		printf("\nAprobado con %.2f", n);
	} else {
		printf("\nDesaprobado con %.2f", n);
	};
		
	return 0;
}

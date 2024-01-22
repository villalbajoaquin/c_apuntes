// 18. Condicionales. Ejercicio: 
// a) Comprobar si un alumno esta aprobado.

#include<stdio.h>

int main(){
	float examen;
	
	printf("Ingrese la nota del examen: ");
	scanf("%f", &examen);
	
	if(examen >= 6){
		puts("\nEl alumno esta aprobado");
		// puts() solo imprime dentro de un condicional.
	};
	
	return 0;
}

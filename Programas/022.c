// 21. Condicionales. Ejercicio:
// e) Comprobar el mayor de dos numeros ingresados y visualizarlo en pantalla.

#include<stdio.h>

int main(){
	int n1, n2;
	
	printf("Ingrese dos numeros: ");
	scanf("%i %i", &n1, &n2);
	
	if(n1 > n2){
		printf("\nEl mayor es: %i", n1);
	} else if (n1 < n2) {
		printf("\nEl mayor es: %i", n2);
	} else {
		printf("\nAmbos numeros son iguales");
	};
		
	return 0;
}

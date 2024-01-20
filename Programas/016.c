// 17. Condicionales. La sentencia if: prueba de divisibilidad.
/*
	if(condicion){
		accion;
	}
*/

#include<stdio.h>

int main(){
	int n1, n2;
	
	printf("Ingrese dos numeros a dividir: ");
	scanf("%i %i", &n1, &n2);
	
	if(n1 % n2 == 0){
		printf("\n %i es divisible entre %i", n1, n2);
	};
	
	return 0;
}

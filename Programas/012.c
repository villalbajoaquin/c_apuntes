// 15. Operadores. Ejercicio aumento de sueldo.
// g) Calcular el nuevo salario luego de un aumento sobre el anterior.
// Porcentaje variable.

#include<stdio.h>

int main(){
	float sal, aumento, sal_final;
	
	printf("Ingrese:");
	printf("\nSalario actual: $ ");
	scanf("%f", &sal);
	printf("\nPorcentaje de aumento: ");
	scanf("%f", &aumento);
	
	sal_final = sal + (sal * aumento / 100);
	
	printf("\nSiendo $%.2f iniciales con un %.f porciento de aumento\n", sal, aumento);
	printf("\nLos valores salariales serian: $%.2f", sal_final);
		
	return 0;
}

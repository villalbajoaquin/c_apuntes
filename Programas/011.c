// 14. Operadores. Ejercicio propuesto.
// f) Dadas las horas trabajadas y su valor por hora, calcular su salario e imprimirlo.
// 8hr --> 1dia | 40hr --> 1sem | 4sem --> 1mes | 52sem --> 1a

#include<stdio.h>

int main(){
	float hr, sal_hr, sal_dia, sal_sem, sal_mes, sal_anio;
	
	printf("Ingrese:");
	printf("\nHoras diarias trabajadas: ");
	scanf("%f", &hr);
	printf("\nSalario por hora: $ ");
	scanf("%f", &sal_hr);
	
	sal_dia = sal_hr * hr;
	sal_sem = sal_dia * 5;
	sal_mes = sal_sem * 4;
	sal_anio = sal_sem * 52;
	
	printf("\nSiendo $%.2f por %.f horas diarias\n", sal_hr, hr);
	printf("\nLos valores salariales serian:\n");
	printf("\n$%2.f al dia, $%.2f a la semana\n", sal_dia, sal_sem);
	printf("\n$%2.f al mes y $%.2f tras 12 meses\n", sal_mes, sal_anio);
		
	return 0;
}

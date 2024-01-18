// 16. Operadores. Ejercicio calculando cantidad de segundos.
// i) Calcular la cantidad de seg. que estan incluidos en el numero
// de horas, minutos y segundos ingresados por el usuario.

#include<stdio.h>

int main(){
	int hr, min, seg, total;
	
	printf("Ingrese los siguientes datos:");
	printf("\nHoras: ");
	scanf("%i", &hr);
	printf("\nMinutos: ");
	scanf("%i", &min);
	printf("\nSegundos: ");
	scanf("%i", &seg);
	
	hr *= 3600;
	min *= 60;
	
	total = hr + min + seg;
	
	printf("\nLa cantidad total de segundos resulta de: %i", total);
	
	return 0;
}

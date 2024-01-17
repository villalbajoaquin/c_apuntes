// 15. Operadores. Ejercicio propuesto.
// h) Calcular la nota final en la materia compuesta de las siguentes.
// 55%, del promedio de los tres parciales, 30% del examen final y un 15% del TPI.

#include<stdio.h>

int main(){
	float p1, p2, p3, parcial, examen, tpi, nota_final;
	
	printf("Ingrese las siguientes calificaciones:");
	printf("\nTres examenes parciales: ");
	scanf("%f %f %f", &p1, &p2, &p3);
	printf("\nExamen final: ");
	scanf("%f", &examen);
	printf("\nTrabajo final: ");
	scanf("%f", &tpi);
	
	parcial = (p1 + p2 + p3) / 3;
	nota_final = (parcial * 0.55) + (examen * 0.3) + (tpi * 0.15);
	
	printf("La nota final de la materia resulta de: %.2f", nota_final);
	
	return 0;
}

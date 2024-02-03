// 25. Condicionales. Ejercicio:
// j) Dada una nota de examen, devuelva la descripcion correspondiente.
/*
	10 - Excelente
	 9 - Distinguido
	 8 - Muy Bien
 	 7 - Bien
     6 - Aprobado
 1 a 5 - Reprobado
*/

#include<stdio.h>

int main(){
	int nota;
		
	printf("\nIngrese la nota del examen (1 a 10).\n");
	scanf("%i", &nota);
	
	switch(nota){
		case 10: printf("\nExcelente!"); break;
		case 9: printf("\nDistinguido!"); break;
		case 8: printf("\nMuy Bien."); break;
		case 7: printf("\nBien."); break;
		case 6: printf("\nAprobado."); break;
		// en el caso de querer agrupar una misma respuesta para varios casos.
		case 5: case 4: case 3: case 2: 
		case 1: printf("\nReprobado."); break;
		default: printf("\nHubo un problema, no es una nota valida (1 al 10).");
	};
		
	return 0;
}

// 26. Condicionales. Ejercicio propuesto:
// m) Mostrar los meses del calendario, pidiendole al
// usuario el numero correspondiente (1 a 12).

#include<stdio.h>

int main(){
	int num;
	
	printf("\nIngrese el numero del mes (1 al 12): ");
	scanf("%i", &num);
	printf("\nMes: ");
	
	switch(num){
		case 1: printf("Enero"); break;
		case 2: printf("Febrero"); break;
		case 3: printf("Marzo"); break;
		case 4: printf("Abril"); break;
		case 5: printf("Mayo"); break;
		case 6: printf("Junio"); break;
		case 7: printf("Julio"); break;
		case 8: printf("Agosto"); break;
		case 9: printf("Septiembre"); break;
		case 10: printf("Octubre"); break;
		case 11: printf("Noviembre"); break;
		case 12: printf("Diciembre"); break;
		default: printf("Hubo un problema, no coincide con un numero valido.");
	};
		
	return 0;
}

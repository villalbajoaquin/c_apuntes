#include <stdio.h>

int main(){
	
	float sueldo, ad;
	int ant, por;
	
	printf("\t--- CALCULADORA DE ADICIONALES ---\n");
	printf("Ingrese antiguedad en la empresa: ");
	scanf("%d", &ant);
	
	if(ant < 0){
		printf("No existe la antiguedad negativa.");
	} else {
		printf("A los 40 000 USD anuales: ");
		
		if(ant <= 10){
			if(ant <= 5){
				if(ant <= 3){
					por = 3;
					sueldo = 40000 * 1.03;
					printf("A cobrar: %.2f USD\n", sueldo);
				} else {
					por = 5;
					sueldo = 40000 * 1.05;
					printf("A cobrar: %.2f USD\n", sueldo);
				}
			} else {
				por = 7;
				sueldo = 40000 * 1.07;
				printf("A cobrar: %.2f USD\n", sueldo);	
			}
		} else {
			por = 10;
			sueldo = 40000 * 1.1;
			printf("A cobrar: %.2f USD\n", sueldo);
		}
		
		ad = sueldo - 40000;
		printf("%.2f USD en concepto de adicionales. (%d%%)\n", ad, por);
	}
	
	return 0;
}
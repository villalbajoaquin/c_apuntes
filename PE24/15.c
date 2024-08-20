#include <stdio.h>

int main(){
	
	int lu, t, mts;
	float peso;
	
	printf("Ingrese la longitud del circuito (m): ");
	scanf("%d", &mts);
	
	if(long > 50){
		printf("Ingrese numero de corredor (0 para finalizar): ");
		scanf("%d", &lu);
		
		while(lu != 0){
			printf("\nIngrese su peso (Kg): ");
			scanf("%f", &peso);
			peso *= 1000;
			printf("\nIngrese su marca de tiempo (segs.): ");
			scanf("%d", &t);
			if(n % 2 == 0) sumPares += n;
			else {
				contIm += 1;
				sumImpares += n;
			}
		
			printf("\nOtro corredor (0 para finalizar): ");
			scanf("%d", &lu);
		}
	}	
	
	
	while(lu != 0){
		
	}
	
	promIm = sumImpares/contIm;
	
	printf("\n Suma de los numeros pares de la lista: %d", sumPares);
	printf("\n Cantidad de numeros impares en la lista: %.f", contIm);
	printf("\n Promedio de los numeros impares en la lista: %.3f", promIm);
	
	return 0;
}
#include <stdio.h>

int main(){
	
	int n, sumPares = 0;
	float promIm, contIm = 0, sumImpares = 0;
	
	printf("Ingrese la lista de numeros: (0 para finalizar)\n");
	scanf("%d", &n);
	
	while(n != 0){
		if(n % 2 == 0) sumPares += n;
		else {
			contIm += 1;
			sumImpares += n;
		}
		
		printf("Otro: (0 para finalizar)\n");
		scanf("%d", &n);
	}
	
	promIm = sumImpares/contIm;
	
	printf("\n Suma de los numeros pares de la lista: %d", sumPares);
	printf("\n Cantidad de numeros impares en la lista: %.f", contIm);
	printf("\n Promedio de los numeros impares en la lista: %.3f", promIm);
	
	return 0;
}
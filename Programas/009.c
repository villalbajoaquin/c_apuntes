// 13. Operadores. Ejercicio propuesto
// d) Calcule la media aritmetica de 3 nros. cualesquiera
// Media = (n1 + n2 + n3) / 3

#include<stdio.h>

int main(){
	float n1, n2, n3, media;
	
	printf("Ingrese los tres numeros: \n");
	
	printf("1): ");
	scanf("%f", &n1);
	printf("2): ");
	scanf("%f", &n2);
	printf("3): ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	printf("\nLa media aritmetica de la serie es: %.2f", media);
		
	return 0;
}

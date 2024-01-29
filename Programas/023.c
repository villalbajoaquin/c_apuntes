// 21. Condicionales. Ejercicio propuesto:
// f) Ingrese un numero y calcule su raiz cuadrada, si el numero es negativo
// imprimalo junto a un mensaje de 'tiene raiz imaginaria'.

#include<stdio.h>
#include<math.h>

int main(){
	float n, r;
	
	printf("Ingrese un numero a calcular su raiz cuadrada: ");
	scanf("%f", &n);
	
	if(n >= 0){
		r = sqrt(n);
		printf("\nLa raiz cuadrada de %.2f es: %.2f", n, r);
	} else {
		printf("\n%.2f tiene raiz imaginaria.", n);
	};
		
	return 0;
}

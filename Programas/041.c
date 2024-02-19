// 32. Ciclos/Bucles. Ejercicio propuesto:
// f) Sumar pares desde n hasta m.

#include<stdio.h>

int main(){
	int n, m, suma = 0;
	
	printf("\tSUMA DE PARES");
	printf("\nIngrese el primero y ultimo del rango a sumar:\n");
	printf("\nPrimero: ");
	scanf("%i", &n);
	printf("\nUltimo: ");
	scanf("%i", &m);
	
	printf("\nSuma de pares desde el %i hasta el %i: \n", n, m);
	
	if(n <= m){
		while(n <= m){
			if(n % 2 == 0){
				suma += n;
			};
			n++;
		};
	} else {
		printf("\nHubo un problema, el primero no puede ser mayor a el ultimo.");
	};
	
	printf("\nLa suma total da: %i", suma);
		
	return 0;
}

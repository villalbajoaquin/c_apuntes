// 31. Ciclos/Bucles. Ejercicio propuesto:
// d) Multiplos de 5, desde 1 hasta n.

#include<stdio.h>

int main(){
	int i = 1, n;
	
	printf("Ingrese el total de numeros a comprobar: ");
	scanf("%i", &n);
	
	printf("\nMultiplos de 5, desde el 1 hasta el %i: \n", n);
	
	while(i <= n){
		if(i % 5 == 0){
			printf("%i,\t", i);
		};
		i++;
	};
		
	return 0;
}

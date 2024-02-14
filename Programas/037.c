// 30. Ciclos/Bucles. Ejercicio propuesto:
// b) Ingrese un numero, si el numero supera a 10, multiplique los 10
// primeros numeros, sino, sumelos.

#include<stdio.h>

int main(){
	int i = 1, n, res;
	
	printf("Ingrese un numero, si el numero supera a 10, multiplica\n");
	printf("los 10 primeros numeros, sino, los suma: ");
	scanf("%i", &n);
	
	if(n > 10){
		while(i <= 10){
			res *= i; // res = (1*1) 1, (1*2) 2, (2*3) 6, (6*4) 24, ...
			i++;
		};
		printf("\nMultiplicacion:");
	} else {
		while(i <= 10){
			res += i; // res = (1+1) 2, (2+2) 4, (4+3) 7, (7+4) 11, ...
			i++;
		};
		printf("\nSuma:");
	};
	
	printf("\nEl resultado da: %i", res);
		
	return 0;
}

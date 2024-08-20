#include <stdio.h>

int fact(int);

int main(){
	int x;
	
	printf("Ingrese un numero para calcular su factorial: ");
	scanf("%d", &x);
	
	printf("El factorial de %d es: %d", x, fact(x));
	
	return 0;
}

int fact(int n){
	int f = n;
	
	while(n > 1){
		f *= (n - 1);
		n--;
	}
	
	return f;
}
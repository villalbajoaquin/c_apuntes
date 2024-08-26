#include <stdio.h>

int verdad(int x);

int main(){
	
	int n;
	
	printf("Ingrese el valor de n: ");
	scanf("%d", &n);
	
	verdad(n);
	if(n == 0){
		printf("\nEl valor de n es cero, confirmando que es Falso.");
	}
	
	return 0;
}

int verdad(int x){
	if(x) printf("Verdadero.");
	else printf("Falso.");
		
	return 0;
}
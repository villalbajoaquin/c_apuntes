#include <stdio.h>

void interC(int *, int *);

int main(){
	int n1, n2;
	
	printf("\tIntercambio de valores:");
	printf("\nIngrese el primer valor: ");
	scanf("%d", &n1);
	printf("\nIngrese el segundo valor: ");
	scanf("%d", &n2);
	
	printf("\n1) %d, 2) %d\n", n1, n2);
	interC(&n1, &n2);
	printf("\n\tIntercambio realizado:\n");
	printf("\n1) %d, 2) %d\n", n1, n2);
	
	return 0;
}

void interC(int *a, int *b){
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}
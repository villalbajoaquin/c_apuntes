// Funcion en C que reciba punteros a dos matrices enteras de
// n*m elementos. La 1ra contiene datos almacenados y se necesita
// almacenar en la 2da un 0 si el valor en la primera es positivo
// y un 1 si es negativo (usar aritmetica de punteros).

#include <stdio.h>
#include <stdlib.h>

void cargaM1(int *, int, int);
void cargaM2(int *, int *, int, int);

int main(){
	int m1[5][5], m2[5][5], *p, *q;
	
	p = &m1[0][0];
	q = &m2[0][0];
	
	cargaM1(p, 5, 5);
	cargaM2(p, q, 5, 5);
	
	return 0;
}

void cargaM1(int *p, int m, int n){
	int i;
	
	printf("\t --- 1RA MATRIZ --- \n");
	
	for(i = 0; i < (m*n); i++){
		*(p+i) = rand() % (201) - 100; // nums entre -100 y 100
		
		printf("\t %d", *(p+i));
		
		if((i + 1) % n == 0){
			printf("\n");
		}
	}
}

void cargaM2(int *p, int *q, int m, int n){
	int i;
	
	printf("\n\t --- 2DA MATRIZ --- \n");
	
	for(i = 0; i < (m*n); i++){
		if(*(p+i) < 0){
			*(q+i) = 1;
		} else {
			*(q+i) = 0;
		}
		
		printf("\t %d", *(q+i));
		
		if((i + 1) % n == 0){
			printf("\n");
		}
	}
}
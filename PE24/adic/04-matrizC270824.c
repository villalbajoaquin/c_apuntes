// Escriba un algoritmo que cargue una matriz de 6x10 con un procedimiento.
// Escriba otro procedimiento intercambio() que cambie la 1ra fila de la matriz
// por la ultima.

#include <stdio.h>

void cargaM(int *, int, int);

void imprimoM(int *, int, int);

void cambio(int *, int, int);

int main(){
	int m[6][10], i, *p;
	p = &m[0][0];
	
	cargaM(p, 6, 10);
	
	printf("\n\t------ MATRIZ ORIGINAL ------\n\n");
	imprimoM(p, 6, 10);
	
	cambio(p, 6, 10);
	
	printf("\n\t------ MATRIZ CAMBIADA ------\n\n");
	imprimoM(p, 6, 10);
	
	return 0;
}

void cargaM(int *p, int f, int c){
	int i;
	
	for(i = 0; i < (f*c); i++){
		*(p+i) = i + 1;
	}
}

void imprimoM(int *p, int f, int c){
	int i;
	
	for(i = 0; i < (f*c); i++){
		printf("\t%d", *(p+i));
		
		if((i+1) % c == 0){
			printf("\n");
		}
	}
}

void cambio(int *p, int f, int c){
    int i, *q, v[10];
    q = &v[0];

    for(i = 0; i < c; i++){
        *(q+i) = *(p+i);
        *(p+i) = *(p+i + (f - 1)*c);
        // printf("\t%d", *(p+i));
    }

    for(i = ((f - 1) * c); i < (f * c); i++){
        *(p+i) = *(q+i - ((f - 1) * c));
        // printf("\t%d", *(p+i));
    }
}
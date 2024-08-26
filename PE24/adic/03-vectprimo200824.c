// 2 vectores, desarrolle un modulo para cargar un vector con
// consecutivos del 2 al 101 y que cargue en el otro vector
// los resultados (1 o 0) si son primo o no.

#include <stdio.h>

void carga(int *v);
void cargaP(int *v, int *p);
int primo(int);

int main(){
	int v[100], p[100], i;

    carga(&v[0]);
    cargaP(&v[0], &p[0]);
    
    for(i = 0; i < 100; i++){
        printf("%d ", v[i]);
        if(p[i] == 0){
        	printf("primo.\n");
		} else {
			printf("compuesto.\n");
		}
    }
	
	return 0;
}

void carga(int *v){
    int i;

    for(i = 0; i < 100; i++){
        v[i]= i+2;
    }
}

void cargaP(int *v, int *p){
    int i, b = 0, x = 2;

    for(i = 0; i < 100;  i++){
    	p[i] = primo(v[i]);
    }
}

int primo(int n){
	int r, b = 0, x = 2;
	
	if(n > 1){
		while(x < n && b == 0){
			if(n % x == 0){
				b = 1;
			}
			x++;
		}
		if(b == 1){
			r = 1;
		} else {
			r = 0;
		}
	} else {
		r = 2;
	}
	
	return r;
}
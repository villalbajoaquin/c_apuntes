// Desarrollar una funcion que reciba un puntero a un vector de numeros
// enteros y un entero y retorne la posicion del vector donde se encuentra
// almacenado por primera vez el numero indicado, o que devuelva "-1"
// si no lo encuentra.

#include <stdio.h>
#include <stdlib.h>

void carga(int *v);
int pos(int *v, int);

int main(){
    int v[8], i, n, lug;

    carga(&v[0]);

    printf("Ingresa el numero para buscar donde esta: ");
    scanf("%d", &n);

    lug = pos(&v[0], n);

    if(lug == -1){
        printf("No lo encontre: posicion %d\n", lug);
    } else {
        printf("Aqui esta: posicion %d\n", lug);
    }

    for(i = 0; i < 8; i++){
        printf("v[%d]: %d\n", i, v[i]);
    }

    return 0;
}

void carga(int *v){
    int i;

    for(i = 0; i < 8; i++){
        v[i]= rand() % 8;
    }
}

int pos(int *v, int x){
    int i = 0, b = 0;

    while (i < 8 && b == 0){
        if (v[i] == x){
            b = 1;
        }
        i++;
    }

    if(b == 0){
        i = -1;
    }

    return i;    
}
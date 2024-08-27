// Realizar un programa en C que en una matriz de 5 filas
// y 10 columnas se intercambien los valores de la 1ra fila
// con los de la ultima fila.

#include <stdio.h>

void cambio(int *, int, int);

int main(){
    int m[5][10], *p, i;
    p = &m[0][0];

    printf("\n\t--- MATRIZ ORIGINAL ---\n\n");

    for(i = 0; i < 50; i++){
        *(p+i) = i + 1;

        printf("\t%d", *(p+i));

        if((i+1) % 10 == 0){
            printf("\n");
        }
    }

    cambio(p, 5, 10);

    printf("\n\t--- MATRIZ MODIFICADA ---\n\n");

    for(i = 0; i < 50; i++){
        printf("\t%d", *(p+i));

        if((i+1) % 10 == 0){
            printf("\n");
        }
    }
    
    return 0;
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
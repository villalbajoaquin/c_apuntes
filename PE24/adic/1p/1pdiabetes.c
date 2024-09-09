// 1) Si bien se deben analizar diferentes variables, se requiere un
// primer diagnostico relacionado al objetivo glucemico, para lo cual
// debera tener en cuenta los siguientes rangos de valores (menores de
// 18). Se necesita una funcion en C que reciba los valores de glucosa
// en sangre de una persona y su edad, informe el diagnostico
// correspondiente:
//                   VALORES    DIAGNOSTICO
//                    < 70      Hipoglucemia
//                  70 a 100    Normal
//                  100 a 180   Pos-prandial
//                    > 180     Hiperglucemia

// 2) Se necesita una función en C que reciba punteros a una matriz de
// NxM y un vector de N elementos de tipo real. La matriz tiene datos
// almacenados y se requiere almacenar el producto (multiplicación) de
// las filas en el vector. Utilizar aritmética de punteros.

// 3) Funcion que reciba un puntero a un string y devuelva la cantidad
// de signos de puntuacion (, . ; :) almacenadas en ella. Usar al menos
// una funcion de manejo de strings de la libreria <string.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int diagnostico(float, int);
void cargaM(float *, int, int);
void muestraM(float *, int, int);
void cargaV(float *, float *, int, int);
void muestraV(float *, int);
int puntos(char *);

int main(){
    // 1)
    int ed, b = 1, diag;
    float glc;

    printf("\t--- Diagnostico glucemico ---\n");
    
    while(b != 0){
        printf("\n\nIngrese su edad: ");
        scanf("%d", &ed);
        printf("Valor glucemico en sangre: ");
        scanf("%f", &glc);

        diag = diagnostico(glc, ed);
        printf("Diagnostico: ");

        switch(diag){
            case 0: printf("No es menor de edad.\n"); break;
            case 1: printf("Hipoglucemia.\n"); break;
            case 2: printf("Normal.\n"); break;
            case 3: printf("Pos-prandial.\n"); break;
            case 4: printf("Hiperglucemia.\n"); break;
            default: printf("Hubo un error.\n");
        }

        printf("\n-----------------------------\n");
        printf("\nDesea realizar otro diagnostico? (0 para salir): ");
        scanf("%d", &b);
    }

    printf("\n-----------------------------\n");

    // 2)
    float m[4][3], v[4] = {1, 1, 1, 1}, *p, *q;

    p = &m[0][0];
    q = &v[0];

    printf("\n-- MATRIZ --\n");
    cargaM(p, 4, 3);
    muestraM(p, 4, 3);
    printf("\n-- VECTOR --\n");
    cargaV(q, p, 4, 3);
    muestraV(q, 4);

    printf("\n-----------------------------\n");

    // 3)
    char cad[140], *s;

    puts("Ingrese un texto.");
    fflush(stdin);
    gets(cad);

    s = &cad[0];

    printf("Cantidad de signos de puntuacion: %d", puntos(s));

    return 0;
}

// 1)
int diagnostico(float gluc, int edad){
    int d;

    if(edad < 18){
        if(gluc < 70){
            d = 1;
        } else if (gluc < 100){
            d = 2;
        } else if (gluc < 180){
            d = 3;
        } else {
            d = 4;
        }
    } else {
        d = 0;
    }

    return d;
}

// 2)
void cargaM(float *p, int f, int c){
    int i;

    srand(time(NULL));

    for(i = 0; i < (f*c); i++){
        *(p+i) = rand() % 51 + 1; //nums del 1 al 51
    };
}

void muestraM(float *p, int f, int c){
    int i;

    for(i = 0; i < (f*c); i++){
        printf("\t%2.f", *(p+i));

        if((i+1) % c == 0){
            printf("\n");
        }
    };
}

void cargaV(float *q, float *p, int f, int c){
    int i, j;

    for (i = 0; i < f; i++){
        for(j = 0; j < c; j++){
            *(q+i) *= *(p+(i*c + j));
        }
    }
}

void muestraV(float *q, int x){
    int i;

    for(i = 0; i < x; i++){
        printf("\t%2.f", *(q+i));
    };
}

// 3)
int puntos(char *s){
    int p = 0, i = 0;

    while(*(s+i) != '\0'){
        if(strchr(",.;:?!", *(s+i))){
            p++;
        }

        i++;
    }

    return p;
}
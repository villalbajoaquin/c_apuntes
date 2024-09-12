#include <stdio.h>

void ingresoSuma(int, float, float *, float *);

int main(){
	int tipo, noches, b = 1;
    float ppn, std = 0, sup = 0, suite = 0, total = 0;

    while(b != 0){
        printf("\nIngrese los siguientes datos:");
        printf("\nTipo habitacion (1: estandar, 2: superior, 3: suite): ");
        scanf("%d", &tipo);
        printf("\nNoches reservadas: ");
        scanf("%d", &noches);
        printf("\nPrecio por noche de la habitacion: ");
        scanf("%f", &ppn);

        if(tipo == 1){
            ingresoSuma(noches, ppn, &std, &total);
        } else if(tipo == 2){
            ingresoSuma(noches, ppn, &sup, &total);
        } else if(tipo == 3){
            ingresoSuma(noches, ppn, &suite, &total);
        }

        printf("\nDesea continuar? (0 para salir): ");
        scanf("%d", &b);        
    }

    printf("Ingresos: estandar: $ %.2f, superior: $ %.2f, suite: $ %.2f, total: $ %.2f", std, sup, suite, total);
	
	return 0;
}

void ingresoSuma(int nchs, float precio, float *tipo, float *tot){
	*tipo += nchs * precio;
    *tot += nchs * precio;
}
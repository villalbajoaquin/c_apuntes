#include <stdio.h>

float calc(float, float, int);

int main(){
	int op;
	float n1, n2;
	
	printf("\t--- CALCULADORA ---\n");
    printf("\nIngrese un numero segun la operacion a realizar:\n");
    printf("\t(1) SUMA\n");
    printf("\t(2) RESTA\n");
    printf("\t(3) PRODUCTO\n");
    printf("\t(4) COCIENTE\n");
    printf("\t(0) SALIR\n");
    scanf("%d", &op);
    
    while(op != 0){
        if(op >= 1 && op <= 4){
            if(op % 2 == 0){
                printf("Ingrese dos numeros (su orden importa):\n");
            } else {
                printf("Ingrese dos numeros (indistinto orden):\n");
            }

            scanf("%f", &n1);
            scanf("%f", &n2);

            switch(op){
                case 1: printf("%.2f + %.2f = %.2f\n", n1, n2, calc(n1, n2, op)); break;
                case 2: printf("%.2f - %.2f = %.2f\n", n1, n2, calc(n1, n2, op)); break;
                case 3: printf("%.2f * %.2f = %.2f\n", n1, n2, calc(n1, n2, op)); break;
                case 4: 
                    if(n2 == 0){
                        printf("Error: Division por cero (0). Indeterminado.\n");
                    } else {
                        printf("%.2f / %.2f = %.2f\n", n1, n2, calc(n1, n2, op));
                    } break;
            }
        } else {
            printf("No hay opcion para el numero ingresado.\n");
        }

        printf("\nIngrese un numero segun la operacion a realizar:\n");
        printf("\t(1) SUMA\n");
	    printf("\t(2) RESTA\n");
    	printf("\t(3) PRODUCTO\n");
	    printf("\t(4) COCIENTE\n");
    	printf("\t(0) SALIR\n");
        scanf("%d", &op);
    }

    if(op == 0) printf("Fin Calculadora.");
	
	return 0;
}

float calc(float x, float y, int opc){
	float res;
	
	switch(opc){
        case 1: res = x + y; break;
        case 2: res = x - y; break;
        case 3: res = x * y; break;
        case 4: res = x / y; break;
    }
	
	return res;
}
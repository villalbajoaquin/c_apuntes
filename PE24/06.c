// 6. Escribir un programa que funcione como calculadora
// (permitir seleccionar opciones).

#include <stdio.h>

int main(){

    int op;
    float n1, n2;
    
    printf("\t --- CALCULADORA ---\n");
    printf("\nIngrese un numero segun la operacion a realizar:\n");
    printf("\t1_ SUMA\n");
    printf("\t2_ RESTA\n");
    printf("\t3_ PRODUCTO\n");
    printf("\t4_ COCIENTE\n");
    printf("\t0_ SALIR\n");
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
                case 1: printf("%.2f + %.2f = %.2f\n", n1, n2, n1 + n2); break;
                case 2: printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2); break;
                case 3: printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2); break;
                case 4: 
                    if(n2 == 0){
                        printf("Error: Division por cero (0). Indeterminado.\n");
                    } else {
                        printf("%.2f / %.2f = %.2f\n", n1, n2, n1 * n2);
                    } break;
            }
        } else {
            printf("No hay opcion para el numero ingresado.\n");
        }

        printf("\nIngrese un numero segun la operacion a realizar:\n");
        printf("\t1_ SUMA\n");
        printf("\t2_ RESTA\n");
        printf("\t3_ PRODUCTO\n");
        printf("\t4_ COCIENTE\n");
        printf("\t0_ SALIR\n");
        scanf("%d", &op);
    }

    if(op == 0) printf("Fin Calculadora.");
    
    return 0;
}
// 4. Realizar un programa que permita el ingreso de 3 numeros y determine  
// cual es el valor del medio; muestre todos los valores ingresados.

#include <stdio.h>

int main(){

    int n1, n2, n3;

    printf("Ingrese los nuemros a evaluar: \n");
    printf("1) ");
    scanf("%d", &n1);
    printf("2) ");
    scanf("%d", &n2);
    printf("3) ");
    scanf("%d", &n3);

    printf("Valores ingresados: %d, %d, %d\n", n1, n2, n3);

    if(((n1 > n2) && (n1 < n3)) || ((n1 < n2) && (n1 > n3))){
        printf("El valor del medio es %d", n1);
    } else if(((n2 > n1) && (n2 < n3)) || ((n2 < n1) && (n2 > n3))){
        printf("El valor del medio es %d", n2);
    } else {
        printf("El valor del medio es %d", n3);
    }
    
    return 0;
}
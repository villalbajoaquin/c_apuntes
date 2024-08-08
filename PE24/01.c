// 1. Escribir un programa que permita el ingreso de dos números, 
// informe sus valores y la suma de los mismos.

#include <stdio.h>

int main(){

    float n1, n2, suma;
    
    printf("Ingrese dos numeros: ");
    scanf("%f", &n1);
    scanf("%f", &n2);

    suma = n1 + n2;
    printf("La suma de %.2f + %.2f = %.2f", n1, n2, suma);
    
    return 0;
}
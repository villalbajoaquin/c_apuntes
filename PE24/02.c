// 2. Escribir un programa que calcule el salario de la siguiente manera: 
// el trabajador cobra un precio fijo por hora y se le descuenta el 10% en
// concepto de aportes. El programa debe solicitar el ingreso de las horas
// trabajadas y el precio que cobra por hora. Como salida debe informar el
// sueldo bruto, el descuento de aportes y el salario a pagar.

#include <stdio.h>

int main(){

    float hs, pph, sBruto, aportes, sNeto;
    
    printf("Ingrese numero de horas trabajadas: ");
    scanf("%f", &hs);
    printf("Ingrese precio por hora: ");
    scanf("%f", &pph);

    sBruto = hs * pph;
    aportes = sBruto * 0.10;
    sNeto = sBruto - aportes;
    printf("Sueldo Bruto: %.2f\n", sBruto);
    printf("Descuento en concepto de Aportes: %.2f\n", aportes);
    printf("Sueldo Neto: %.2f\n", sNeto);
    
    return 0;
}
// 8. Realizar un programa que tome tres numeros y diga si el tercero es 
// el resto de la division de los dos primeros.

#include <stdio.h>

int main(){

    int n1, n2, n3;
    
    printf("Ingrese tres numeros enteros: \n");
    printf("\tn1: ");
    scanf("%d", &n1);
    printf("\tn2: ");
    scanf("%d", &n2);
    printf("\tn3: ");
    scanf("%d", &n3);

    if(n3 == (n1 % n2)){
        printf("%d es el resto de la division entre %d y %d", n3, n1, n2);
    } else if(n3 == (n2 % n1)){
        printf("%d es el resto de la division entre %d y %d", n3, n2, n1);
    } else {
        printf("Muchas gracias!");
    }
    
    return 0;
}
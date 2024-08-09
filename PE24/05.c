// 5. De 10 numeros ingresados indicar cuantos son mayores a cero (0) y 
// cuantos son menores a cero (0).

#include <stdio.h>

int main(){

    int i = 1, cMay = 0, cMen = 0;
    float n;
    
    while(i <= 10){
        printf("Ingrese un numero (intento %d)\n", i);
        scanf("%f", &n);
        if(n > 0){
            cMay++;
        } else if(n < 0){
            cMen++;
        }
        i++;
    }
    
    printf("Cantidad de numeros mayores a cero: %d\n", cMay);
    printf("Cantidad de numeros menores a cero: %d\n", cMen);
    
    return 0;
}
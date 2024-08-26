// 7. Realizar un programa que permita convertir una nota numerica a
// una cualitativa, teniendo en cuenta la siguiente clasificacion:
// La calificación final podrá ser Excelente (10), Distinguido (9),
// Muy Bueno (8), Bueno (7), Aprobado (6), o Insuficiente (1 a 5).
// La nota del alumno deberá ser ingresada por teclado.

#include <stdio.h>

int main(){

    int n;

    printf("Ingrese una nota numerica: ");
    scanf("%d", &n);

    while (n != 0){
        if(n <= 10 && n > 0){
            switch (n){
            case 10: printf("Excelente."); break;
            case 9: printf("Distinguido."); break;
            case 8: printf("Muy Bueno."); break;
            case 7: printf("Bueno."); break;
            case 6: printf("Aprobado."); break;
            default: printf("Insuficiente.");
            }
        } else {
            printf("No es una nota numerica valida, deberia ser entre 1 y 10.");
        };

        printf("\nIngrese una nota numerica (0 para salir): ");
        scanf("%d", &n);
    }
    
    return 0;
}
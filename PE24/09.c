// 9. Escribir un programa que pida una letra y determine si es una vocal.

#include <stdio.h>

int main(){

    char c;
    
    printf("Ingrese una letra ('0' para salir): ");
    scanf("%c", &c);

    while(c != '0'){
        if((c == 'A') || (c == 'a') || (c == 'E') || (c == 'e') ||
        (c == 'I') || (c == 'i') || (c == 'O') || (c == 'o') ||
        (c == 'U') || (c == 'u')){
            printf("\n%c es una vocal.\n", c);
        } else {
            printf("\n%c NO es una vocal.\n", c);
        }

        fflush(stdin);
        
        printf("\nIngrese una letra ('0' para salir): ");
        scanf("%c", &c);
    }
        
    return 0;
}
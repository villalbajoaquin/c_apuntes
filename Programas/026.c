// 23. Condicionales. Ejercicio:
// i) Hacer un programa que borre la pantalla al pulsar 1.

#include<stdio.h>
#include<stdlib.h>
/* De stdlib.h utilizaremos el metodo:
	system("cls") para borrar el contenido en pantalla.
*/

int main(){
	char tecla;
	
	printf("--- PROGAMA DE BORRADO DE PANTALLA ---");
	printf("\n--------------------------------------\n");
	printf("\n--------------------------------------\n");
	printf("\n--------------------------------------\n");
	printf("Para limpiar la pantalla, ingrese '1': ");
	scanf("%c", &tecla);
	
	if(tecla == '1'){
		system("cls");
		printf("\nBorrado exitoso.");
	} else {
		fflush(stdin); // para 'limpiar el buffer'.
		printf("\nTecla incorrecta, no se pudo limpiar.");
		printf("\nPara limpiar la pantalla, ingrese '1': ");
		scanf("%c", &tecla);
		if(tecla == '1'){
			system("cls");
			printf("\nBorrado exitoso.");
		} else {
			printf("\nTecla incorrecta, no se pudo limpiar.");
		}
	};
		
	return 0;
}

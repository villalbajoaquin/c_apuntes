// 12. Operadores. Ejercicio hipotenusa de un triangulo
// b) Sacar la hipotenusa de un triangulo rectangulo, pidiendo al
// usuario el valor de los dos catetos.

#include<stdio.h>
#include<math.h>
/* De math.h utilizaremos los metodos:
	sqrt() para la raiz cuadrada
	y pow() para la potencia
*/

int main(){
	float hip, cateto1,cateto2;
	
	printf("Ingrese los valores de los dos catetos: \n");
	/*
	scanf("%f %f", &cateto1, &cateto2);
	*/
	printf("Cateto 1: ");
	scanf("%f", &cateto1);
	printf("Cateto 2: ");
	scanf("%f", &cateto2);
	
	hip = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
	
	printf("La hipotenusa del triangulo es: %.2f", hip);
		
	return 0;
}

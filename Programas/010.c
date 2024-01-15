// 14. Operadores. Ejercicio descuento en una tienda
// e) Una tienda ofrece descuentos sobre el total de la compra,
// determinar el pago final y el reintegro

#include<stdio.h>

int main(){
	float total_compra, dto, reintegro, precio;
	
	printf("Ingrese: \n");
	printf("Total de compra: $ ");
	scanf("%f", &total_compra);
	printf("Descuento: ");
	scanf("%f", &dto);
	
	reintegro = total_compra * dto / 100;
	precio = total_compra - reintegro;
	
	printf("\nEl precio final de la compra es: $%.2f\n", precio);
	printf("\nCon un descuento del %.f porciento\n", dto);
	printf("\nEl monto del reintegro es: $%.2f\n", reintegro);
		
	return 0;
}

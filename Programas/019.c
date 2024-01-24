// 19. Condicionales. Ejercicio tarifa electrica: 
// c) Calcular la tarifa de luz segun su consumo: (consumo * tasa)
// Hasta a 1000 KWh = *0.8, entre 1000 y hasta 1850 = *1.0 y mayor a 1850 = *1.2.

#include<stdio.h>
#define T1 0.8
#define T2 1.0
#define T3 1.2

int main(){
	float consumo, t, factura;
	
	printf("Ingrese un el consumo medido en KWh: ");
	scanf("%f", &consumo);
	
	if(consumo <= 1000){
		t = T1;
	};
	
	if(consumo >= 1000 && consumo <= 1850){
		t = T2;
	};
	
	if(consumo > 1850){
		t = T3;
	};
	
	factura = consumo * t;
	
	printf("La tarifa a pagar es de: $%.2f", factura);	
	return 0;
}

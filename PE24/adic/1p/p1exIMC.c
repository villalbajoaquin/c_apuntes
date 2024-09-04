// IMC: 
// 1) Funcion que reciba peso y altura y devuelva el IMC correspondiente.
// Luego utilice la funcion para indicar de una lista de n personas (cuyos
// datos se ingresan por teclado) cual es el IMC de c/u.

// 2) Funcion que reciba dos datos, el 1ro es un IMC y el 2do es una
// matriz de 4*2 que contiene el rango de valores de IMC (1ra fila: rango
// bajo peso, 2da fila: rangos peso saludable, 3ra fila: sobrepeso, y
// 4ta fila: obesidad). Segun el IMC ingresado, retornar un 0 si es bajo
// peso, 1 si es normal, 2 si esta en sobrepeso y un 3 si es obeso.
// UTILIZAR ARITMETICA DE PUNTEROS.

// 3) Funcion que reciba un puntero a string y devuelva una c (corta)
// si la cadena tiene menos de 10 caracteres, m (media) si tiene entre
// 11 y 29, y una l (larga) si tiene 30 o + caracteres.

#include <stdio.h>
#include <string.h>

void carga(float *);
float imc(float, float);
int cat(float *, float);
char largo3(char *);

int main(){
	float peso, alt, rangos[4][2], *p, vImc;
	char nombre[20], punto3[100], *s;
	int b = 1;
	
	p = &rangos[0][0];
	carga(p);
	
	printf("\t --- CALCULADORA DE IMC --- \n");
	
	while(b == 1){
		printf("\nIngrese su nombre: ");
		fflush(stdin);
		gets(nombre);
		printf("\nIngrese su peso (kg): ");
		scanf("%f", &peso);
		printf("\nIngrese su altura (m): ");
		scanf("%f", &alt);
		
		vImc = imc(peso, alt);
		
		printf("\n%s, valor IMC: %.1f\n", nombre, vImc);
		
		if(cat(p, vImc) == 3){
			printf("\nCategoria: OBESO.\n");
		} else if(cat(p, vImc) == 2){
			printf("\nCategoria: SOBREPESO.\n");
		} else if(cat(p, vImc) == 1){
			printf("\nCategoria: NORMAL.\n");
		} else {
			printf("\nCategoria: BAJO PESO.\n");
		}
		
		printf("\nDesea continuar? (0 para salir) ");
		scanf("%d", &b);
	}
	
	printf("\nMuchas gracias.");
	printf("\n-------------------\n");
	
	printf("\t ---LARGO DE CADENA--- \n");
	
	b = 1;
	s = &punto3[0];
	
	while(b == 1){
		puts("Ingrese la cadena a evaluar.");
		fflush(stdin);
		gets(punto3);
		
		if(largo3(s) == 'c'){
			printf("\nCadena corta.\n");
		} else if(largo3(s) == 'm'){
			printf("\nCadena media.\n");
		} else {
			printf("\nCadena larga.\n");
		}
		
		printf("\nDesea continuar? (0 para salir) ");
		scanf("%d", &b);
	}
	
	printf("\nMuchas gracias.");	
	
	return 0;
}

void carga(float *p){
	int i;
	
	*p = 0;
	*(p+1) = 18.4;
	*(p+3) = 24.9;
	*(p+5) = 29.9;
	*(p+7) = 250;
	
	for(i = 2; i < 7; i +=2){
		*(p+i) = *(p+i-1) + 0.1;
	}
}

float imc(float p, float h){
	float r;
	
	r = p / (h*h);
	
	return r;
}

int cat(float *p, float imc){
	int r;
	
	if(imc > *(p+6)){
		r = 3;
	} else if(imc > *(p+4)){
		r = 2;
	} else if(imc > *(p+2)){
		r = 1;
	} else {
		r = 0;
	}
	
	return r;
}

char largo3(char *s){
	char c;
	
	if(strlen(s) < 11){
		c = 'c';
	} else if(strlen(s) < 30){
		c = 'm';
	} else {
		c = 'l';
	}
	
	return c;
}
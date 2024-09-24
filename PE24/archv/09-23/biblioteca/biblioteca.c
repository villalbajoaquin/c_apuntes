#include <stdio.h>
#include <stdlib.h>

struct lib {
	int id;
	char nombre[30], ed[30];
	int anio;
} libro;

void alta();
void lista();

int main(){
	int op;
	
	printf("\t\t----- BIBLIOTECA -----\n\n\t----- MENU -----\n");
	printf("1- Dar de alta un libro.\n2- Listar libros.\n0- Salir.\n");
	printf("Ingrese opcion: ");
	scanf("%d", &op);
	
	while (op != 0){
		switch(op){
			case 1: alta(); break;
			case 2: lista(); break;
			case 0: printf("\nMuchas gracias!"); break;
			default: printf("\nOpcion no disponible.");
		}
		
		printf("\n--------------------\n");
		printf("\n\t----- MENU -----\n");
		printf("1- Dar de alta un libro.\n2- Listar libros.\n0- Salir.\n");
		printf("Ingrese opcion: ");
		scanf("%d", &op);
	}
	
	return 0;
}

void alta(){
	FILE *flibro;
	flibro = fopen("../libro.dat", "ab");
	
	system("cls");
	
	printf("\t----- ALTA DE LIBRO -----\n");
	
	printf("Ingrese id: ");
	scanf("%d", &libro.id);
	
	printf("Ingrese nombre: ");
	fflush(stdin);
	gets(libro.nombre);
	
	printf("Ingrese nombre de la editorial: ");
	fflush(stdin);
	gets(libro.ed);
	
	printf("Ingrese anio de edicion: ");
	scanf("%d", &libro.anio);
		
	if(flibro != NULL){
		fwrite(&libro, sizeof(libro), 1, flibro);
	} else {
		printf("\nError al abrir el archivo.");
	}
	
	fclose(flibro);
}

void lista(){
	int c = 0;
	FILE *flibro;
	flibro = fopen("../libro.dat", "rb");
	system("cls");
	
	printf("\t----- LISTA DE LIBROS -----\n");
	
	fread(&libro, sizeof(libro), 1, flibro);
	printf("Lista de libros en existencia:");
	
	while(!feof(flibro)){
		printf("\n------------------------\n");
		printf("ID: %d\nLibro: \"%s\"\n", libro.id, libro.nombre);
		printf("Editorial: %s\nAnio de edicion: %d", libro.ed, libro.anio);
		printf("\n------------------------\n");
		c++;
		
		fread(&libro, sizeof(libro), 1, flibro);
	}
	
	printf("Libros en existencia: %d", c);
	
	fclose(flibro);
}
#include <stdio.h>
#include <stdlib.h>

void alta();
void lista();
void modif();

struct lib {
	int id;
	char nombre[30], ed[30];
	int anio;
} libro;

int main(){
	int op;
	
	printf("\t\t----- BIBLIOTECA -----\n\n\t----- MENU -----\n");
	printf("1- Dar de alta un libro.\n2- Listar libros.\n");
	printf("3- Modificar datos de un libro.\n0- Salir.\n");
	printf("Ingrese opcion: ");
	scanf("%d", &op);
	
	while (op != 0){
		switch(op){
			case 1: alta(); break;
			case 2: lista(); break;
			case 3: modif(); break;
			case 0: printf("\nMuchas gracias!"); break;
			default:{
				system("cls"); 
				printf("\nOpcion no disponible.");
			}
		}
		
		if(op != 0){
			printf("\n--------------------\n");
			printf("\n\t----- MENU -----\n");
			printf("1- Dar de alta un libro.\n2- Listar libros.\n");
			printf("3- Modificar datos de un libro.\n0- Salir.\n");
			printf("Ingrese opcion: ");
			scanf("%d", &op);
		}
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
	
	if(flibro != NULL){
		printf("\t----- LISTA DE LIBROS -----\n");
		fread(&libro, sizeof(libro), 1, flibro);
		
		while(!feof(flibro)){
			printf("\n------------------------\n");
			printf("ID: %d\nLibro: \"%s\"\n", libro.id, libro.nombre);
			printf("Editorial: %s\nAnio de edicion: %d", libro.ed, libro.anio);
			printf("\n------------------------\n");
			c++;
			
			fread(&libro, sizeof(libro), 1, flibro);
		}
		
		printf("Libros en existencia: %d", c);
		
	} else {
		printf("\nError al abrir el archivo.");
	}
	
	fclose(flibro);
}

void modif(){
	int id, eu = 0;
	char mod;
	FILE *flibro;
	flibro = fopen("../libro.dat", "r+b");
	system("cls");
	
	printf("Ingrese el id del libro a buscar:");
	scanf("%d", &id);
	
	if(flibro != NULL){
		fread(&libro, sizeof(libro), 1, flibro);
		while(!feof(flibro) && eu == 0){
			if(id == libro.id){
				eu = 1;
				printf("\nNombre del libro: %s, desea modificarlo? (s/n) ", libro.nombre);
				fflush(stdin);
				scanf("%c", &mod);
				if(mod == 's'){
					printf("\nIngrese el nombre: ");
					fflush(stdin);
					gets(libro.nombre);
				}
				
				printf("\nNombre de la editorial: %s, desea modificarlo? (s/n) ", libro.ed);
				fflush(stdin);
				scanf("%c", &mod);
				if(mod == 's'){
					printf("\nIngrese la editorial: ");
					fflush(stdin);
					gets(libro.ed);
				}
				
				printf("\nAnio de edicion del libro: %d, desea modificarlo? (s/n) ", libro.anio);
				fflush(stdin);
				scanf("%c", &mod);
				if(mod == 's'){
					printf("\nIngrese el anio: ");
					scanf("%d", &libro.anio);
				}
			}
			
			if(eu == 0){
				fread(&libro, sizeof(libro), 1, flibro);
			} else {
				fseek(flibro, (long)sizeof(libro)*(-1), SEEK_CUR); // forzar el tipo por warning
				fwrite(&libro, sizeof(libro), 1, flibro);
			}
		}
	} else {
		printf("\nError al abrir el archivo.");
	}
	
	fclose(flibro);
}
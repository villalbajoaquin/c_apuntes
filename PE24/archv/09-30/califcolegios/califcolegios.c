// Clase 30-09:

// Programa donde a partir de la generacion de 3 b-files, generar otro donde
// informe resultados de los examenes finales s/materias del 2do Cuatrimestre.
// * alumnos.dat	=> datos de los alumnos (matricula, apellido, nombres).
// * materias.dat	=> datos de materias (cod_mat[4], materia, cuatrimestre(1 o 2))
// * finales.dat	=> notas finales de alumno por materia (cod_mat, matricula, nota)

// Pudiendo agregar, mostrar y modificar los 3 archivos.
// * resultados.dat	=> resultados por materia (materia, resultado en cantidad
// ([aprobo|desaprobo|ausente]))

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nuevoAl();
void listarAl();
void nuevoMat();
void listarMat();
void cargaFnl();
void listarFnl();
void buscRes();
void listarRes();
//void buscAl();

struct al {
	int id;
	char apellidos[25], nombres[25];
} alumno;

struct mat {
	char id[5], nombre[35];
	int cuatri;
} materia;

struct fnl {
	char cod_mat[5];
	int id_alumno;
	float calif;
} final;

struct r_mat {
	char materia[35];
	int res[3];
} resultado;

int main() {
	int op;
	
	printf("\t\t----- GESTION CALIFICACION -----\n\n");
	printf(" 1- Inscribir un alumno.\n 2- Mostrar alumnos inscritos.\n");
	printf(" 3- Registrar una materia.\n 4- Mostrar materias dictadas.\n");
	printf(" 5- Registrar notas finales.\n 6- Listar notas finales.\n");
	printf(" 7- Buscar una materia.\n 8- Consultar todos los estados.\n");
	printf(" 0- Salir.\n\nIngrese una opcion: ");
	
	scanf("%d", &op);
	
	while(op != 0){
		system("cls");
		
		switch(op){
			case 0: printf("\n0!\n"); break;
			case 1: nuevoAl(); break;
			case 2: listarAl(); break;
			case 3: nuevoMat(); break;
			case 4: listarMat(); break;
			case 5: cargaFnl(); break;
			case 6: listarFnl(); break;
			case 7: buscRes(); break;
			case 8: listarRes(); break;
			default: printf("\nOpcion no valida. Ingrese nuevamente.\n");
		}
		
		if(op != 0){
			printf("\n\n\t----- MENU -----\n\n");
			printf(" 1- Inscribir un alumno.\n 2- Mostrar alumnos inscritos.\n");
			printf(" 3- Registrar una materia.\n 4- Mostrar materias dictadas.\n");
			printf(" 5- Registrar notas finales.\n 6- Listar notas finales.\n");
			printf(" 7- Buscar una materia.\n 8- Consultar todos los estados.\n");
			printf(" 0- Salir.\n\nIngrese una opcion: ");
			scanf("%d", &op);
		}
	}
	
	return 0;
}

void nuevoAl(){
	FILE *fp;
	
	fp = fopen("../alumnos.dat", "ab");
	system("cls");
	
	printf("\t----- INSCRIPCION ALUMNO -----\n");
	
	printf("Ingrese matricula: ");
	scanf("%d", &alumno.id);
	
	printf("Ingrese nombre/s: ");
	fflush(stdin);
	gets(alumno.nombres);
	
	printf("Ingrese apellido/s: ");
	fflush(stdin);
	gets(alumno.apellidos);
	
	if(fp != NULL){
		fwrite(&alumno, sizeof(alumno), 1, fp);
	} else {
		printf("\nError al abrir el archivo.");
	}
	
	fclose(fp);
}

void listarAl(){
	FILE *fp;
	int c = 0;
	
	fp = fopen("../alumnos.dat", "rb");
	system("cls");
		
	if(fp != NULL){
		printf("\t----- LISTA ALUMNOS INSCRITOS -----\n");
		printf("\n------------------------\n");
		fread(&alumno, sizeof(alumno), 1, fp);
		
		while(!feof(fp)){
			printf("Matricula: %d\nApellido/s: %s\n", alumno.id, alumno.apellidos);
			printf("Nombre/s: %s", alumno.nombres);
			printf("\n------------------------\n");
			c++;
			
			fread(&alumno, sizeof(alumno), 1, fp);
		}
		
		printf("Cantidad de alumnos inscritos: %d", c);
	} else {
		printf("\nError al abrir el archivo.");
	}
	
	fclose(fp);
}

void nuevoMat(){
	FILE *fmat, *fres;
	
	fmat = fopen("../materias.dat", "ab");
	fres = fopen("../resultados.dat", "ab");
	system("cls");
	
	printf("\t----- REG. NUEVA MATERIA -----\n");
	
	printf("Ingrese id de la materia (4 caracteres): ");
	fflush(stdin);
	gets(materia.id);
	
	printf("Ingrese nombre de la materia: ");
	fflush(stdin);
	gets(materia.nombre);
	
	strcpy(resultado.materia, materia.nombre);
	resultado.res[0] = 0;
	resultado.res[1] = 0;
	resultado.res[2] = 0;
	
	printf("Cuatrimestre de dictado (1/2): ");
	scanf("%d", &materia.cuatri);
	
	if(fmat != NULL && fres != NULL){
		fwrite(&materia, sizeof(materia), 1, fmat);
		fwrite(&resultado, sizeof(resultado), 1, fres);
	} else {
		printf("\nError al abrir el archivo.");
	}
	
	fclose(fmat);
	fclose(fres);
}

void listarMat(){
	FILE *fp;
	int c = 0;
	
	fp = fopen("../materias.dat", "rb");
	system("cls");
		
	if(fp != NULL){
		printf("\t----- LISTA MATERIAS DICTADAS -----\n");
		printf("\n------------------------\n");
		fread(&materia, sizeof(materia), 1, fp);
		
		while(!feof(fp)){
			printf("Id Materia: %s\nNombre: %s\n", materia.id, materia.nombre);
			printf("Cuatrimestre: %d", materia.cuatri);
			printf("\n------------------------\n");
			c++;
			
			fread(&materia, sizeof(materia), 1, fp);
		}
		
		printf("Cantidad de materias dictadas: %d", c);
	} else {
		printf("\nError al abrir el archivo.");
	}
	
	fclose(fp);
}

void cargaFnl(){
	FILE *ffnl, *fres, *fmat;
	char seguir = 's', nom_mat[35];
	int eu = 0;
	
	ffnl = fopen("../finales.dat", "ab");
	fres = fopen("../resultados.dat", "r+b");
	fmat = fopen("../materias.dat", "rb");
	system("cls");
	
	printf("\t----- REG. NOTAS FINALES -----\n");
	
	while(seguir == 's'){
		rewind(fmat);
		if(fmat != NULL){
			printf("\nMaterias:");
			
			fread(&materia, sizeof(materia), 1, fmat);
			while(!feof(fmat)){
				printf("\n%s - %s", materia.id, materia.nombre);
				fread(&materia, sizeof(materia), 1, fmat);
			}
			
			printf("Ingrese id de la materia (4 caracteres): ");
			fflush(stdin);
			gets(final.cod_mat);
			
			rewind(fmat);
			
			fread(&materia, sizeof(materia), 1, fmat);
			while(!feof(fmat) && eu == 0){
				if(strcmp(final.cod_mat, materia.id) == 0){
					eu = 1;
					strcpy(nom_mat, materia.nombre);
				}
				
				fread(&materia, sizeof(materia), 1, fmat);
			}
			
			if(eu == 0){
				printf("\nId de materia no valido.");
			}
		} else {
			printf("\nMaterias no disponibles.");
		}
		
				
		while(seguir == 's'){
			printf("Ingrese matricula del alumno inscrito: ");
			scanf("%d", &final.id_alumno);
			
			printf("Ingrese nota final del alumno: ");
			scanf("%f", &final.calif);
			while((final.calif > 10) && (final.calif < 0)){
				printf("Nota invalida. Ingrese nota final del alumno: ");
				scanf("%f", &final.calif);
			}
			
			printf("\n%s - Matricula %d, ", nom_mat, final.id_alumno);
			printf("nota: %.2f, confirma? (s/n): ", final.calif);
			fflush(stdin);
			scanf("%c", &seguir);
			
			if(fres != NULL){
				rewind(fres);
				fread(&resultado, sizeof(resultado), 1, fres);				
				while(!feof(fres) && (nom_mat != resultado.materia)){
					fread(&resultado, sizeof(resultado), 1, fres);
				}
				
				if(final.calif >= 4){
					resultado.res[0]++;
				} else if(final.calif > 0){
					resultado.res[1]++;
				} else {
					resultado.res[2]++;
				}
				
				fseek(fres, (long)sizeof(resultado)*(-1), SEEK_CUR);
				fwrite(&resultado, sizeof(resultado), 1, fres);
				
			} else {
				printf("\nError al actualizar estado.");
			}
			
			if((seguir == 's') && (ffnl != NULL)){
				fwrite(&final, sizeof(final), 1, ffnl);
				printf("\nRegistro cargado.\n");
			} else {
				printf("\nNo se cargo el registro.\n");
			}
			
			printf("Continua la carga de otros alumnos, misma materia? (s/n): ");
			fflush(stdin);
			scanf("%c", &seguir);
		}
		
		printf("Desea continuar la carga de otras materias? (s/n): ");
		fflush(stdin);
		scanf("%c", &seguir);
	}
	
	fclose(ffnl);
	fclose(fmat);
	fclose(fres);
}

void listarFnl(){
	FILE *ffnl;
	char ant_mat[5];
	int c = 0, a;
	
	ffnl = fopen("../finales.dat", "rb");
	system("cls");
		
	if(ffnl != NULL){
		printf("\t----- LISTA FINALES DADOS -----\n");
		printf("\n-------------------------------\n");
		fread(&final, sizeof(final), 1, ffnl);
		
		while(!feof(ffnl)){
			if(strcmp(ant_mat, final.cod_mat) != 0){
				printf("Id Materia: %s\n", final.cod_mat);
				c++;
				a = 0;
			}
			
			strcpy(ant_mat, final.cod_mat);
			
			printf("\nMatricula: %d, Nota: %.2f\n", final.id_alumno, final.calif);
			a++;
			fread(&final, sizeof(final), 1, ffnl);
			
			if((strcmp(ant_mat, final.cod_mat) != 0) || feof(ffnl)){
				printf("\nCantidad de alumnos en la mesa: %d", a);
				printf("\n-------------------------------\n");
			}
		}
		
		printf("\nCantidad de materias con finales: %d", c);
	} else {
		printf("\nError al abrir el archivo.");
	}
	
	fclose(ffnl);
}

void buscRes(){
	FILE *fres, *fmat;
	char id[5], nom[35];
	int eu = 0;
	
	fres = fopen("../resultados.dat", "rb");
	fmat = fopen("../materias.dat", "rb");
	system("cls");
	
	if(fres != NULL && fmat != NULL){
		printf("\t----- BUSCAR ESTADO -----\n");
		printf("\n-------------------------------\n");
		
		printf("\nMaterias:");
			
		fread(&materia, sizeof(materia), 1, fmat);
		while(!feof(fmat)){
			printf("\n%s - %s", materia.id, materia.nombre);
			fread(&materia, sizeof(materia), 1, fmat);
		}
		
		printf("\nBuscar una de las materias por id:");
		fflush(stdin);
		gets(id);
		
		fread(&materia, sizeof(materia), 1, fmat);
		while(!feof(fmat) && (eu == 0)){
			if(strcmp(materia.id, id) == 0){
				eu = 1;
				strcpy(nom, materia.nombre);
			}
			
			fread(&materia, sizeof(materia), 1, fmat);
		}
		
		eu = 0;
		
		fread(&resultado, sizeof(resultado), 1, fres);
		while(!feof(fres) && (eu == 0)){
			if(strcmp(resultado.materia, nom) == 0){
				eu = 1;
			}
			
			if(eu == 0){
				fread(&resultado, sizeof(resultado), 1, fres);
			}
		}
		
		printf("\n Materia: %s\n Aprobados: %d", resultado.materia, resultado.res[0]);
		printf("\n Desaprobados: %d\n Ausentes: %d", resultado.res[1], resultado.res[2]);
	} else {
		printf("\nError al abrir el archivo.");
	}
	
	fclose(fres);
	fclose(fmat);
}

void listarRes(){
	FILE *fres;
	
	fres = fopen("../resultados.dat", "rb");
	system("cls");
		
	if(fres != NULL){
		printf("\t----- LISTA ESTADO MATERIAS -----\n");
		printf("\n------------------------\n");
		fread(&resultado, sizeof(resultado), 1, fres);
		
		while(!feof(fres)){
			printf("Materia: %s\nAprobados: %d\n", resultado.materia, resultado.res[0]);
			printf("\n Desaprobados: %d\n Ausentes: %d", resultado.res[1], resultado.res[2]);
			printf("\n------------------------\n");
			
			fread(&resultado, sizeof(resultado), 1, fres);
		}
	} else {
		printf("\nError al abrir el archivo.");
	}
	
	fclose(fres);
}

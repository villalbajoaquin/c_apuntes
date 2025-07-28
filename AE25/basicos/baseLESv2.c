#include <stdio.h>
#include <stdlib.h>

struct Lista
{
    int valor;
    struct Lista *sgte;
};

// --- RECURSIVAS ---
struct Lista *insertarLL(struct Lista *nv, struct Lista *iniL);
void recorrerLL(struct Lista *iniL, int n);
struct Lista *borrarLL(int v, struct Lista *iniL);
struct Lista *borrarTodos(int v, struct Lista *iniL);
struct Lista *borrarId(int v, struct Lista *iniL, int n);
struct Lista *borrarListaL(struct Lista *iniL);
void buscarId(int v, struct Lista *iniL, int n);
void buscarLL(int v, struct Lista *iniL, int n);
void modificarId(int v, struct Lista *iniL, int n);

int main()
{
    int op, v = 0;

    struct Lista *lista = NULL, *nodo = NULL;

    do
    {
        printf("\n------------------------------------");
        printf("\n|------------ BASE LES ------------|");
        printf("\n|------ VERSION SIMPLIFICADA ------|");
        printf("\n|-------- CON RECURSIVIDAD --------|");
        printf("\n|-------- (SI ES POSIBLE) ---------|");
        printf("\n------------------------------------");
        printf("\n\n---------- MENU PRINCIPAL ----------\n");
        printf("\n1) RECURSIVA: Insertar un nodo a la lista.");
        printf("\n2) RECURSIVA: Recorrer la lista.");
        printf("\n3) RECURSIVA: Borrar un nodo de la lista (1 del valor ingresado).");
        printf("\n4) RECURSIVA: Borrar todos los nodos del mismo valor.");
        printf("\n5) RECURSIVA: Borrar un nodo ordenado en la lista (n).");
        printf("\n6) RECURSIVA: Borrar completamente la lista.");
        printf("\n7) RECURSIVA: Buscar un nodo por posicion (n).");
        printf("\n8) RECURSIVA: Buscar un nodo por valor.");
        printf("\n9) RECURSIVA: Modificar el valor de un nodo (n).");
        printf("\n\n0) Salir: finaliza el programa.");
        printf("\n------------------------------------\nIngrese una opcion: ");
        scanf("%d", &op);
        system("cls");

        switch(op)
        {
            case 0: printf("\n- PROGRAMA FINALIZADO -\n"); break;
            case 1:
                printf("\n1) RECURSIVA: Insertar un nodo a la lista.\n");

                do
                {
                    printf("\nIngrese el valor a insertar (0 para salir) ---> ");
                    scanf("%d", &v);

                    nodo = (struct Lista *)malloc(sizeof(struct Lista));
                    if(nodo != NULL){
                        nodo->valor=v;
                        nodo->sgte=NULL;
                    }

                    if(v != 0){
                        lista = insertarLL(nodo, lista);
                    } else {
                        printf("\nCarga de elementos finalizada.\n");
                    }
                } while (v != 0);

                break;
            
            case 2:
                printf("\n2) RECURSIVA: Recorrer la lista.\n");

                if(lista != NULL){
                    printf("\n- LISTA -\n");
                    printf("\nElementos:");
                    printf("\n------------------------------------\n");
                    recorrerLL(lista,1);
                } else {
                    printf("\n- LISTA VACIA -\n");
                }
                break;
            
            case 3:
                printf("\n3) RECURSIVA: Borrar un nodo de la lista.\n");

                do
                {
                    printf("\n------------------------------------\n");
                    recorrerLL(lista, 1);
                    printf("\nIngrese el valor a buscar (0 para salir) ---> ");
                    scanf("%d", &v);

                    if(v != 0){
                        lista = borrarLL(v, lista);
                    } else {
                        printf("\nBorrado de elementos finalizada.\n");
                    }
                } while (v != 0);
                break;
            
            case 4:
                printf("\n4) RECURSIVA: Borrar todos los nodos del mismo valor.\n");

                do
                {
                    printf("\n------------------------------------\n");
                    recorrerLL(lista, 1);
                    printf("\nIngrese el valor a buscar (0 para salir) ---> ");
                    scanf("%d", &v);

                    if(v != 0){
                        lista = borrarTodos(v, lista);
                    } else {
                        printf("\nBorrado de elementos finalizada.\n");
                    }
                } while (v != 0);
                break;
            
            case 5:
                printf("\n5) RECURSIVA: Borrar un nodo ordenado en la lista (n).\n");

                do
                {
                    printf("\n------------------------------------\n");
                    recorrerLL(lista, 1);
                    printf("\nIngrese el nro. (posicion) en la lista (0 para salir) ---> ");
                    scanf("%d", &v);

                    if(v != 0){
                        borrarId(v, lista, 1);
                    } else {
                        printf("\nBorrado de elementos finalizada.\n");
                    }
                } while (v != 0);
                break;
            
            case 6:
                printf("\n6) RECURSIVA: Borrar completamente la lista.\n");

                printf("\nDesea eliminar todos los elementos de la lista?");
                printf("\n(0 para salir) ---> ");
                scanf("%d", &v);

                if(v != 0){
                    printf("\nBorrando elementos de la lista...\n");
                    lista = borrarListaL(lista);
                    system("pause");
                    printf("\nLista vaciada exitosamente.\n");
                } else {
                    printf("\nOperacion cancelada.\n");
                }
                break;
            
            case 7:
                printf("\n7) RECURSIVA: Buscar un nodo por posicion (n).\n");
                do
                {
                    printf("\n------------------------------------\n");
                    printf("\nIngrese el valor de la posicion a buscar (0 para salir) ---> ");
                    scanf("%d", &v);

                    if(v != 0){
                        buscarId(v, lista, 1);
                    } else {
                        printf("\nBusqueda de elementos finalizada.\n");
                    }
                } while (v != 0);
                break;
            
            case 8:
                printf("\n8) RECURSIVA: Buscar un nodo por valor.\n");
                do
                {
                    printf("\n------------------------------------\n");
                    printf("\nIngrese el valor a buscar (0 para salir) ---> ");
                    scanf("%d", &v);

                    if(v != 0){
                        buscarLL(v, lista, 0);
                    } else {
                        printf("\nBusqueda de elementos finalizada.\n");
                    }
                } while (v != 0);
                break;
            
            case 9:
                printf("\n9) RECURSIVA: Modificar el valor de un nodo (n).\n");
                do
                {
                    printf("\n------------------------------------\n");
                    recorrerLL(lista, 1);
                    printf("\nIngrese el nro. (posicion) en la lista (0 para salir) ---> ");
                    scanf("%d", &v);

                    if(v != 0){
                        modificarId(v, lista, 1);
                    } else {
                        printf("\nActualizacion de elementos finalizada.\n");
                    }
                } while (v != 0);
                break;

            default: printf("\nError: numero de opcion no valida, ingrese nuevamente.\n");
        }
        
        system("pause");
        system("cls");
    } while(op != 0);
    
    return 0;
}

struct Lista *insertarLL(struct Lista *nv, struct Lista *iniL)
{
    if(iniL != NULL){
        if(nv->valor < iniL->valor){
            nv->sgte = iniL;
            iniL = nv;
        } else {
            iniL->sgte = insertarLL(nv, iniL->sgte);
        }
    } else {
        iniL = nv;
    }

    return(iniL);
}

void recorrerLL(struct Lista *iniL, int n)
{
    if(iniL != NULL){
        printf("%d)\t%d\n", n, iniL->valor);
        recorrerLL(iniL->sgte, n+1);
    }
}

struct Lista *borrarLL(int v, struct Lista *iniL)
{
    struct Lista *bor = NULL;

    if(iniL != NULL){
        if(iniL->valor == v){
            bor = iniL;
            iniL = iniL->sgte;
            bor->sgte = NULL;
            free(bor);
            printf("\nElemento \"%d\" eliminado de la lista.\n", v);
        } else {
            iniL->sgte = borrarLL(v, iniL->sgte);
        }
    } else {
        printf("\nEl elemento \"%d\" no esta en la lista.\n", v);
    }
    
    return(iniL);
}

struct Lista *borrarTodos(int v, struct Lista *iniL)
{
    struct Lista *bor = NULL;

    if(iniL != NULL){
        if(iniL->valor == v){
            bor = iniL;
            iniL = iniL->sgte;
            bor->sgte = NULL;
            free(bor);
            printf("\nElemento \"%d\" eliminado de la lista.\n", v);
            iniL = borrarTodos(v, iniL);
        } else {
            iniL->sgte = borrarTodos(v, iniL->sgte);
        }
    }
    
    return(iniL);
}

struct Lista *borrarId(int v, struct Lista *iniL, int n)
{
    struct Lista *bor = NULL;

    if(iniL != NULL){
        if(n == v){
            bor = iniL;
            iniL = iniL->sgte;
            bor->sgte = NULL;
            printf("\nElemento \"%d) %d\" eliminado de la lista.\n", v, bor->valor);
            free(bor);
        } else {
            iniL->sgte = borrarId(v, iniL->sgte, n+1);
        }
    }
    
    return(iniL);
}

struct Lista *borrarListaL(struct Lista *iniL)
{
    struct Lista *bor = NULL;

    if(iniL != NULL){
        bor = iniL;
        iniL->sgte = borrarListaL(iniL->sgte);
        bor->sgte = NULL;
        printf("\nElemento \"%d\" eliminado de la lista.\n", bor->valor);
        free(bor);
    }

    return(NULL);
}

void buscarId(int v, struct Lista *iniL, int n)
{
    if(iniL != NULL){
        if(v == n)
        {
            printf("Nodo encontrado, existe en la lista.");
        } else {
            buscarId(v, iniL->sgte, n+1);
        }
    }
}

void buscarLL(int v, struct Lista *iniL, int n)
{
    if(iniL != NULL){
        if(v == iniL->valor)
        {
            n++;
        }
        if(iniL->sgte == NULL){
            printf("\nHay %d nodos con valor %d en la lista.\n", n, v);
        } else {
            buscarLL(v, iniL->sgte, n);
        }
    }
}

void modificarId(int v, struct Lista *iniL, int n)
{
    if(iniL != NULL){
        if(n == v){
            printf("\nValor actual: %d\n", iniL->valor);
            printf("\nIngrese nuevo valor: ");
            scanf("%d", &(iniL->valor));
        } else {
            modificarId(v, iniL->sgte, n+1);
        }
    }
}
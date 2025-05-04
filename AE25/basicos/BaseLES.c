#include <stdio.h>
#include <stdlib.h>

struct Lista
{
    int valor;
    struct Lista *sgte;
};

void insertarL(int v, struct Lista **iniL, int asc);
struct Lista *buscarAnt(int dato, struct Lista *rc, int asc);
void recorrerL(struct Lista *iniL);
void buscarL(int v, struct Lista *rc);
void borrarL(int v, struct Lista **iniL);
void buscarBorrar(int v, struct Lista **rc, struct Lista **ant);
struct Lista *borrarLista(struct Lista *iniL);

int main()
{
    int op, v = 0, asc;

    struct Lista *lista = NULL;

    do
    {
        printf("\n\t\t--- PRELIMINAR ---\n");
        printf("\nEl orden de la lista es ascendente? (de menor a mayor)");
        printf("\nIngrese una opcion (1: ascendente | 0: descendente) --> ");
        scanf("%d", &asc);
        system("cls");

        printf("\nError --- El valor ingresado debe ser entre 0 y 1.\n");
    } while(asc > 1 || asc < 0);

    do
    {
        printf("\n\t--- MENU PRINCIPAL ---\n\n");
        printf("\n1) Insertar un nodo a la lista.");
        printf("\n2) Recorrer la lista.");
        printf("\n3) Buscar un nodo en la lista.");
        printf("\n4) Borrar un nodo de la lista.");
        printf("\n5) Borrar completamente la lista.");
        printf("\n\n0) Salir: finaliza el programa.\n");
        printf("\n\nIngrese una opcion: ");
        scanf("%d", &op);
        system("cls");

        switch(op)
        {
            case 0: printf("\n- PROGRAMA FINALIZADO -\n"); break;
            case 1:
                printf("\n1) Insertar un nodo a la lista.\n");

                do
                {
                    printf("\nIngrese el valor a insertar (0 para salir) ---> ");
                    scanf("%d", &v);

                    if(v != 0){
                        insertarL(v, &lista, asc);
                    } else {
                        printf("\nCarga de elementos finalizada.\n");
                    }
                } while (v != 0);   
                
                break;
            
            case 2:
                printf("\n2) Recorrer la lista.\n");
                recorrerL(lista);
                break;
            
            case 3:
                printf("\n3) Buscar un nodo en la lista.\n");
                
                do
                {
                    printf("\nIngrese el valor del nodo a buscar");
                    printf("\n(0 para finalizar busqueda) ---> ");
                    scanf("%d", &v);
                    
                    if(v != 0){
                        buscarL(v, lista);
                    } else {
                        printf("\nBusqueda finalizada.\n");
                    }
                } while(v != 0);

                break;
            case 4:
                printf("\n4) Borrar un nodo de la lista.\n");

                do
                {
                    printf("\nIngrese el valor del elemento a borrar (0 para salir) ---> ");
                    scanf("%d", &v);

                    if(v != 0){
                        borrarL(v, &lista);
                    } else {
                        printf("\nBorrado de elementos finalizado.\n");
                    }
                } while (v != 0);   
                
                break;
                case 5:
                    printf("\n5) Borrar completamente la lista.\n");
                    printf("\nDesea eliminar todos los elementos de la lista?");
                    printf("\n(0 para salir) ---> ");
                    scanf("%d", &v);

                    if(v != 0){
                        printf("\nBorrando elementos de la lista...\n");
                        lista = borrarLista(lista);
                        system("pause");
                        printf("\nLista vaciada exitosamente.\n");
                    } else {
                        printf("\nOperacion cancelada.\n");
                    }
                    
                    break;

            default: printf("\nError: numero de opcion no valida, ingrese nuevamente.\n");
        }
        
        system("pause");
        system("cls");
    } while(op != 0);
    
    return 0;
}

void insertarL(int v, struct Lista **iniL, int asc)
{
    struct Lista *ant, *nodo = (struct Lista *)malloc(sizeof(struct Lista));

    ant = buscarAnt(v, *iniL, asc);

    nodo->valor = v;
    
    if(ant != NULL){
        nodo->sgte = ant->sgte;
        ant->sgte = nodo;
    } else {
        nodo->sgte = *iniL;
        *iniL = nodo;
    }
}

struct Lista *buscarAnt(int dato, struct Lista *rc, int asc)
{
    struct Lista *ant = NULL;

    while(rc != NULL)
    {
        if((rc->valor > dato && asc == 1) || (rc->valor < dato && asc == 0)){
            rc = NULL;
        } else {
            ant = rc;
            rc = rc->sgte;
        }
    }

    return(ant);
}

void recorrerL(struct Lista *iniL)
{
    if(iniL == NULL){
        printf("\n- LISTA VACIA -\n");
    } else {
        printf("\n- LISTA -\n");
        printf("\nElementos:\n");

        while (iniL != NULL)
        {
            printf("%d\n", iniL->valor);
            iniL = iniL->sgte;
        };
    }
}

void buscarL(int v, struct Lista *rc)
{
    int n = 0;

    while(rc != NULL)
    {
        if(rc->valor == v){
            n++;
        }
        rc = rc->sgte;
    }
    if(n > 1){
        printf("\nSe ha encontrado el valor \"%d\" %d veces\n", v, n);
    } else if (n == 1){
        printf("\nSe ha encontrado una vez al valor \"%d\".\n", v);
    } else {
        printf("\nNo se ha encontrado \"%d\" en la lista.\n", v);
    }
}

void borrarL(int v, struct Lista **iniL)
{
    struct Lista *ant = NULL, *bor = *iniL;

    buscarBorrar(v, &bor, &ant);

    if(bor != NULL){
        if(ant == NULL){
            *iniL = (*iniL)->sgte;
        } else {
            ant->sgte = bor->sgte;
        }
        bor->sgte = NULL;
        free(bor);
        printf("\nEl elemento \"%d\" eliminado de la lista.\n", v);
    } else {
        printf("\nEl elemento \"%d\" no esta en la lista.\n", v);
    }
}

void buscarBorrar(int v, struct Lista **rc, struct Lista **ant)
{
    int eu = 0;

    while((*rc != NULL) && (eu == 0)){
        if((*rc)->valor == v){
            eu = 1;
        } else {
            *ant = *rc;
            *rc = (*rc)->sgte;
        }
    }
}

struct Lista *borrarLista(struct Lista *iniL)
{
    struct Lista *aux = NULL;

    while(iniL != NULL)
    {
        aux = iniL;
        iniL = iniL->sgte;
        aux->sgte = NULL;
        free(aux);
    }

    return(NULL);
}
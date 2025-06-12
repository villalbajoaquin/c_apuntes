#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Arbol
{
    int valor;
    struct Arbol *izq, *der;  
};

struct Arbol *insertar(struct Arbol *raiz, struct Arbol *nodo);
void recorrerIRD(struct Arbol *raiz);
void busqueda(struct Arbol *raiz, int dato);
struct Arbol *eliminar(struct Arbol *raiz, int dato);
struct Arbol *borrarNodo(struct Arbol *borrar);
int cantidad(struct Arbol *raiz);
int buscarMax(struct Arbol *raiz);
int buscarMin(struct Arbol *raiz);
int nivel(struct Arbol *raiz, int dato);

int main()
{
    int op, carga, valor, dato;
    struct Arbol *tree=NULL, *nodo=NULL;

    do
    {
        system("cls");
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("\n1- Insertar un nodo.\n2- Recorrer (Listar).\n3- Buscar un nodo.");
        printf("\n4- Eliminar un nodo.\n5- Contar nodos.\n6- Valor Minimo/Maximo.");
        printf("\n7- Nivel de un nodo.\n");
        printf("\nIngrese una opcion: ");
        fflush(stdin);
        scanf("%d", &op);
        system("cls");

        switch(op)
        {
            case 0: printf("\nPrograma finalizado.\n"); break;
            case 1:
                printf("\nIngrese secuencialmente valores de nodo, 0 para salir: ");
                scanf("%d",&valor);
                while (valor!=0)
                {
                    nodo = (struct Arbol*) malloc(sizeof(struct Arbol));
                    if (nodo!=NULL)
                    {
                        nodo->valor=valor;
                        nodo->der=NULL;
                        nodo->izq=NULL;
                        tree=insertar(tree,nodo);
                    }else{
                        printf("\nError de asignacion de memoria (ABB).");
                    }
                    printf("\nIngrese un nuevo registro, 0 para salir: ");
                    scanf("%d",&valor);
                }
                break;
            case 2:
                if(tree!=NULL)
                {
                    printf("\n---RECORRIDO IRD---\n");
                    printf("\n-----------------\n");
                    recorrerIRD(tree);
                    printf("\n-----------------\n");
                }else{
                    printf("\nEl arbol no tiene nodos.\n");                  
                }
                break;
            case 3:
                if(tree!=NULL)
                {
                    printf("\n---BUSCAR NODO---\n");
                    printf("\nIngresar el valor a buscar: ");
                    scanf("%d",&valor);
                    busqueda(tree,valor);
                }else{
                    printf("\nEl arbol no tiene nodos.\n");                  
                }
                break;
            case 4:
                if(tree!=NULL)
                {
                    printf("\n---ELIMINAR NODO---\n");
                    printf("\nIngresar el valor que desea eliminar: ");
                    scanf("%d",&valor);
                    tree=eliminar(tree,valor);
                }else{
                    printf("\nEl arbol no tiene nodos.\n");                  
                }
                break;
            case 5:
                dato=cantidad(tree);

                if(dato==0)
                {
                    printf("\nEl arbol no tiene nodos.\n");
                }else{
                    printf("\n---CANTIDAD DE NODOS---\n");
                    printf("\nEl arbol tiene %d nodos.\n", dato);                    
                }
                break;
            case 6:
                if(tree!=NULL)
                {
                    printf("\n---VALOR MIN/MAX---\n");
                    printf("\nIngrese 1 para consultar el maximo, 0 para minimo: ");
                    scanf("%d",&carga);

                    if(carga==1)
                    {
                        dato=buscarMax(tree);
                        if(dato==-1)
                        {
                            printf("\nNo hay nodos en el arbol.\n");
                        }else{
                            printf("\nEl arbol tiene %d como valor maximo.\n", dato);
                        }                    
                    }else if(carga==0){
                        dato=buscarMin(tree);
                        if(dato==-1)
                        {
                            printf("\nNo hay nodos en el arbol.\n");
                        }else{
                            printf("\nEl arbol tiene %d como valor minimo.\n", dato);
                        }   
                    }else{
                        printf("\nNo estaba como opcion lo que ingresaste.\n");
                    }
                }else{
                    printf("\nEl arbol no tiene nodos.\n");                  
                }
                break;
            case 7:
                if(tree!=NULL)
                {
                    printf("\n---NIVEL DEL NODO---\n");
                    printf("\nIngresar el valor a buscar: ");
                    scanf("%d",&valor);
                    dato=nivel(tree,valor);
                    
                    if(dato==-1)
                    {
                        printf("\nNo hay nodo con el valor ingresado.\n");
                    }else{
                        printf("\nEl nodo de valor %d, esta en el nivel %d.\n", valor, dato);
                    }
                }else{
                    printf("\nEl arbol no tiene nodos.\n");                  
                }
                break;
            default: printf("\nOpcion incorrecta, ingrese nuevamente.\n");
        }

        system("pause");
    }while(op!=0);

    return 0;
}

struct Arbol *insertar(struct Arbol *raiz, struct Arbol *nodo)
{
    if (raiz !=NULL)
    {
        if ((raiz->valor==nodo->valor))
        {
            printf("\nEl nodo ingresado ya existe en el arbol.");
            free(nodo);
        }else{
            if (raiz->valor < nodo->valor)
            {
                raiz->der=insertar((raiz->der),nodo);
            }else{
                raiz->izq=insertar((raiz->izq),nodo);
            }
        }
    }else{
        raiz=nodo;
    }
    return raiz;
}

void recorrerIRD(struct Arbol *raiz)
{
    if (raiz != NULL)
	{
		recorrerIRD(raiz->izq);
		printf(" ID: %d ||",raiz->valor);
		recorrerIRD(raiz->der);
	}
}

void busqueda(struct Arbol *raiz, int dato)
{
    if (raiz!=NULL)
    {
        if(raiz->valor==dato)
        {
            printf("\nValor encontrado. Imprimiendo resultado...");
            printf("\nNodo: %d\n",raiz->valor);
        }else if(raiz->valor < dato){
            busqueda(raiz->der,dato);
        }else{
            busqueda(raiz->izq,dato);
        }
    }else{
        printf("\nValor no encontrado en el arbol.\n");
    }
}

struct Arbol *eliminar(struct Arbol *raiz, int dato)
{
    struct Arbol *nuevaRaiz=raiz;
    if(raiz!=NULL)
    {
        if(raiz->valor==dato)
        {
            nuevaRaiz=borrarNodo(raiz);
            printf("\nNodo borrado.\n");
        }else if(raiz->valor < dato)
        {
            raiz->der=eliminar(raiz->der,dato);
        }else{
            raiz->izq=eliminar(raiz->izq,dato);
        }
    }else{
        printf("\nNo se encontro el nodo con el valor ingresado.\n");
    }

    return(nuevaRaiz);
}

struct Arbol *borrarNodo(struct Arbol *borrar)
{
    struct Arbol *ant=NULL, *nuevaRaiz=NULL, *raiz=borrar->izq;

    if(raiz!=NULL)
    {
        while(raiz->der!=NULL)
        {
            ant=raiz;
            raiz=raiz->der;
        }

        raiz->der=borrar->der;

        if(ant!=NULL)
        {
            ant->der=raiz->izq;
            raiz->izq=borrar->izq;
        }

        nuevaRaiz=raiz;
    }else{
        nuevaRaiz=borrar->der;
    }

    free(borrar);
    return(nuevaRaiz);
}

int cantidad(struct Arbol *raiz)
{
    int cant=0;
	if(raiz != NULL){
		cant=1;
		cant+=cantidad(raiz->izq);
		cant+=cantidad(raiz->der);
	}
	return(cant);
}

int buscarMax(struct Arbol *raiz)
{
    int max=-1;
    struct Arbol *act = raiz;
    
    if(raiz!=NULL)
    {
        while (act!=NULL && act->der!=NULL)
        {
            act = act->der;
        }
        max=act->valor;
    }

    return(max);
}

int buscarMin(struct Arbol *raiz)
{
    int min=-1;
    struct Arbol *act = raiz;
    
    if(raiz!=NULL)
    {
        while (act!=NULL && act->izq!=NULL)
        {
            act = act->izq;
        }
        min=act->valor;
    }

    return(min);
}

int nivel(struct Arbol *raiz, int dato)
{
    int nivel=0, res=-1;
    struct Arbol *act = raiz;

    while (act!=NULL && res==-1)
    {
        if (act->valor==dato)
        {
            res=nivel;
        }else{
            nivel+=1;
            if (act->valor > dato)
            {
                act = act->izq;
            }else{
                act = act->der;
            }
        }
    }

    return(res);
}

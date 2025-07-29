#include <stdio.h>
#include <stdlib.h>

struct Pila
{
    int valor;
    struct Pila *sgte;
};

/*
int vaciaC(struct Cola *salida);
void encolar(struct Cola **nodo, struct Cola **entrada, struct Cola **salida);
void desencolar(struct Cola **nodo, struct Cola **entrada, struct Cola **salida);
void recorrerC(struct Cola *salida);
void buscarC(int valor, struct Cola *salida);
void borrarC(int valor, struct Cola **entrada, struct Cola **salida);
void eliminarC(struct Cola **entrada, struct Cola **salida);
int contarC(struct Cola *salida);
void maxminC(struct Cola *salida);
*/

int vaciaP(struct Pila *tope);
void apilar(struct Pila **nodo, struct Pila **tope);
void desapilar(struct Pila **nodo, struct Pila **tope);
void recorrerP(struct Pila *tope);
void buscarP(int v, struct Pila *tope);
void borrarP(int v, struct Pila **tope);
struct Pila *borrarPilaP(struct Pila *tope);
void modificarP(int v, struct Pila **tope, int n);

int main()
{
    int op, v;
    struct Pila *nodo=NULL, *tope=NULL;

    do
    {
        system("cls");
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("\n1- Insertar un nodo.\n2- Recorrer (Listar).\n3- Buscar un nodo.");
        printf("\n4- Eliminar un nodo.\n5- Eliminar todos los nodos de la pila.");
        printf("\n6- Modificar nodo por posicion.\n");
        printf("\n0- Salir.");
        printf("\nIngrese una opcion: ");
        fflush(stdin);
        scanf("%d", &op);
        system("cls");

        switch(op)
        {
            case 0: printf("\nPrograma finalizado.\n"); break;
            case 1:
                printf("\n1- Insertar un nodo.\n");
                do
                {
                    printf("\nIngrese el valor a insertar (0 para salir) ---> ");
                    scanf("%d", &v);

                    if(v != 0){
                        nodo = (struct Pila *) malloc(sizeof(struct Pila));
                        if(nodo!=NULL){
                            nodo->valor=v;
                            nodo->sgte=NULL;
                            apilar(&nodo,&tope);
                        }
                    } else {
                        printf("\nCarga de elementos finalizada.\n");
                    }
                } while (v != 0);
                break;

            case 2:
                if(vaciaP(tope)==0)
                {
                    printf("\n2- Recorrer (Listar).\n");
                    printf("\n------------------------------------\n");
                    recorrerP(tope);
                } else {
                    printf("\nNo hay elementos en la pila para poder recorrerla.\n");
                }
                break;

            case 3:
                if(vaciaP(tope)==0)
                {
                    printf("\n3- Buscar un nodo.\n");
                    do
                    {
                        printf("\nIngrese el valor a buscar (0 para salir) ---> ");
                        scanf("%d", &v);
                        
                        if(v != 0){
                            buscarP(v, tope);
                        } else {
                            printf("\nBusqueda finalizada.\n");
                        }
                    } while(v != 0);
                } else {
                    printf("\nNo hay elementos en la pila para poder recorrerla.\n");
                }
                break;

            case 4:
                if(vaciaP(tope)==0)
                {
                    printf("\n4- Eliminar un nodo.\n");
                    do
                    {
                        printf("\n------------------------------------\n");
                        recorrerP(tope);
                        printf("------------------------------------\n");
                        printf("\nIngrese el valor a eliminar (0 para salir) ---> ");
                        scanf("%d", &v);
                        
                        if(v != 0){
                            borrarP(v, &tope);
                        } else {
                            printf("\nBorrado finalizado.\n");
                        }
                    } while(v != 0);
                } else {
                    printf("\nNo hay elementos en la pila para poder recorrerla.\n");
                }
                break;

            case 5:
                if(vaciaP(tope)==0)
                {
                    printf("\n5- Eliminar todos los nodos de la cola.\n");
                    tope = borrarPilaP(tope);
                    printf("\nBorrado finalizado.\n");
                } else {
                    printf("\nNo hay elementos en la pila para poder recorrerla.\n");
                }
                break; 

            case 6:
                if(vaciaP(tope)==0)
                {
                    printf("\n6- Modificar nodo por posicion.\n");
                    do
                    {
                        printf("\n------------------------------------\n");
                        recorrerP(tope);
                        printf("------------------------------------\n");
                        printf("\nIngrese la posicion del nodo a eliminar (0 para salir) ---> ");
                        scanf("%d", &v);
                        
                        if(v != 0){
                            modificarP(v, &tope, 1);
                        } else {
                            printf("\nBorrado finalizado.\n");
                        }
                    } while(v != 0);
                } else {
                    printf("\nNo hay elementos en la pila para poder recorrerla.\n");
                }
                break;

            default: printf("\nOpcion incorrecta, ingrese nuevamente.\n");
        }

        system("pause");
    }while(op!=0);

    return 0;
}

int vaciaP(struct Pila *tope)
{
    int vacia=0;

    if(tope==NULL)
    {
        vacia=1;
    }
    return(vacia);
}

void apilar(struct Pila **nodo, struct Pila **tope)
{
    (*nodo)->sgte = *tope;
    *tope = *nodo;
    *nodo = NULL;
}

void desapilar(struct Pila **nodo, struct Pila **tope)
{
    *nodo = *tope;
    *tope = (*tope)->sgte;
    (*nodo)->sgte = NULL;
}

void recorrerP(struct Pila *tope)
{
    struct Pila *nodo=NULL, *topeAux=NULL;
    int n=1;

    while(vaciaP(tope) == 0){
        desapilar(&nodo, &tope);
        printf("%d)\t%d\n", n, nodo->valor);
        n++;
        apilar(&nodo, &topeAux);
    }

    while(vaciaP(topeAux) == 0){
        desapilar(&nodo, &topeAux);
        apilar(&nodo, &tope);
    }
}

void buscarP(int v, struct Pila *tope)
{
    struct Pila *nodo=NULL, *topeAux=NULL;
    int eu=0;

    while((vaciaP(tope) == 0)&&(eu==0)){
        desapilar(&nodo, &tope);
        if(nodo->valor==v)
        {
            eu=1;
            printf("\nNodo %d encontrado.\n", v);
        } else {
            apilar(&nodo, &topeAux);
        }
    }
    if(eu==0)
    {
        printf("\nNo se ha encontrado al nodo %d en la pila.\n", v);
    }
    while(vaciaP(topeAux) == 0){
        desapilar(&nodo, &topeAux);
        apilar(&nodo, &tope);
    }
}

void borrarP(int v, struct Pila **tope)
{
    struct Pila *nodo=NULL, *topeAux=NULL;
    int eu=0;

    while(vaciaP(*tope) == 0){
        desapilar(&nodo, tope);
        if(nodo->valor==v)
        {
            eu=1;
            printf("\nNodo %d encontrado, procede a eliminarse.\n", v);
            free(nodo);
        } else {
            apilar(&nodo, &topeAux);
        }
    }
    if(eu==0)
    {
        printf("\nNo se ha encontrado al nodo %d en la pila.\n", v);
    }
    while(vaciaP(topeAux) == 0){
        desapilar(&nodo, &topeAux);
        apilar(&nodo, tope);
    }
}

struct Pila *borrarPilaP(struct Pila *tope)
{
    struct Pila *nodo=NULL;

    while(vaciaP(tope) == 0){
        desapilar(&nodo, &tope);
        free(nodo);
    }

    return(NULL);
}

void modificarP(int v, struct Pila **tope, int n)
{
    struct Pila *nodo=NULL, *topeAux=NULL;
    int eu=0;

    while((vaciaP(*tope) == 0)&&(eu==0)){
        desapilar(&nodo, tope);
        if(n==v)
        {
            eu=1;
            printf("\nValor actual: %d\n",nodo->valor);
            printf("\nIngrese nuevo valor: ");
            scanf("%d", &(nodo->valor));
        }
        n++;
        apilar(&nodo, &topeAux);
    }
    if(eu==0)
    {
        printf("\nNo se ha encontrado al nodo %d en la pila.\n", v);
    }
    while(vaciaP(topeAux) == 0){
        desapilar(&nodo, &topeAux);
        apilar(&nodo, tope);
    }
}
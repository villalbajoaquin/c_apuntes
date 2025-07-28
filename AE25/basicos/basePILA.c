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

int main()
{
    int op, valor;
    struct Pila *nodo=NULL, *tope=NULL;

    do
    {
        system("cls");
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("\n1- Insertar un nodo.\n2- Recorrer (Listar).\n3- Buscar un nodo.");
        printf("\n4- Eliminar un nodo.\n5- Eliminar todos los nodos de la pila.");
        printf("\n6- Contar nodos.\n7- Valor Minimo/Maximo.");
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
                    scanf("%d", &valor);

                    if(valor != 0){
                        nodo = (struct Pila *) malloc(sizeof(struct Pila));
                        if(nodo!=NULL){
                            nodo->valor=valor;
                            nodo->sgte=NULL;
                            apilar(&nodo,&tope);
                        }
                    } else {
                        printf("\nCarga de elementos finalizada.\n");
                    }
                } while (valor != 0);
                break;
            case 2:
                if(vaciaP(tope)==0)
                {
                    printf("\n2- Recorrer (Listar).\n");
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
                        scanf("%d", &valor);
                        
                        if(valor != 0){
                            //buscarC(valor, salida);
                        } else {
                            printf("\nBusqueda finalizada.\n");
                        }
                    } while(valor != 0);
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
                        printf("\nIngrese el valor a eliminar (0 para salir) ---> ");
                        scanf("%d", &valor);
                        
                        if(valor != 0){
                            //borrarC(valor, &entrada, &salida);
                        } else {
                            printf("\nBorrado finalizado.\n");
                        }
                    } while(valor != 0);
                } else {
                    printf("\nNo hay elementos en la pila para poder recorrerla.\n");
                }
                break;
            case 5:
                if(vaciaP(tope)==0)
                {
                    printf("\n5- Eliminar todos los nodos de la cola.\n");
                    //eliminarC(&entrada, &salida);
                    printf("\nBorrado finalizado.\n");
                } else {
                    printf("\nNo hay elementos en la pila para poder recorrerla.\n");
                }
                break;    
            case 6:
                if(vaciaP(tope)==0)
                {
                    printf("\n6- Contar nodos.\n");
                    //printf("\nHay %d elementos en la pila.\n", contarC(tope));
                } else {
                    printf("\nNo hay elementos en la pila para poder recorrerla.\n");
                }
                break;
            case 7:
                if(vaciaP(tope)==0)
                {
                    printf("\n7- Valor Minimo/Maximo.\n");
                    //maxminC(tope);
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
#include <stdio.h>
#include <stdlib.h>

struct Cola
{
    int valor;
    struct Cola *sgte;
};

int vaciaC(struct Cola *salida);
void encolar(struct Cola **nodo, struct Cola **entrada, struct Cola **salida);
void desencolar(struct Cola **nodo, struct Cola **entrada, struct Cola **salida);
void recorrerC(struct Cola *salida);
void buscarC(int valor, struct Cola *salida);
void borrarC(int valor, struct Cola **entrada, struct Cola **salida);
void eliminarC(struct Cola **entrada, struct Cola **salida);
int contarC(struct Cola *salida);
void maxminC(struct Cola *salida);

int main()
{
    int op, valor;
    struct Cola *nodo=NULL, *entrada=NULL, *salida=NULL;

    do
    {
        system("cls");
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("\n1- Insertar un nodo.\n2- Recorrer (Listar).\n3- Buscar un nodo.");
        printf("\n4- Eliminar un nodo.\n5- Eliminar todos los nodos de la cola.");
        printf("\n6- Contar nodos.\n7- Valor Minimo/Maximo.");
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
                        nodo = (struct Cola *) malloc(sizeof(struct Cola));
                        if(nodo!=NULL){
                            nodo->valor=valor;
                            nodo->sgte=NULL;
                            encolar(&nodo,&entrada,&salida);
                        }
                    } else {
                        printf("\nCarga de elementos finalizada.\n");
                    }
                } while (valor != 0);
                break;
            case 2:
                if(vaciaC(salida)==0)
                {
                    printf("\n2- Recorrer (Listar).\n");
                    recorrerC(salida);
                } else {
                    printf("\nNo hay elementos en la cola para poder recorrerla.\n");
                }
                break;
            case 3:
                if(vaciaC(salida)==0)
                {
                    printf("\n3- Buscar un nodo.\n");
                    do
                    {
                        printf("\nIngrese el valor a buscar (0 para salir) ---> ");
                        scanf("%d", &valor);
                        
                        if(valor != 0){
                            buscarC(valor, salida);
                        } else {
                            printf("\nBusqueda finalizada.\n");
                        }
                    } while(valor != 0);
                } else {
                    printf("\nNo hay elementos en la cola para poder recorrerla.\n");
                }
                break;
            case 4:
                if(vaciaC(salida)==0)
                {
                    printf("\n4- Eliminar un nodo.\n");
                    do
                    {
                        printf("\nIngrese el valor a eliminar (0 para salir) ---> ");
                        scanf("%d", &valor);
                        
                        if(valor != 0){
                            borrarC(valor, &entrada, &salida);
                        } else {
                            printf("\nBorrado finalizado.\n");
                        }
                    } while(valor != 0);
                } else {
                    printf("\nNo hay elementos en la cola para poder recorrerla.\n");
                }
                break;
            case 5:
                if(vaciaC(salida)==0)
                {
                    printf("\n5- Eliminar todos los nodos de la cola.\n");
                    eliminarC(&entrada, &salida);
                    printf("\nBorrado finalizado.\n");
                } else {
                    printf("\nNo hay elementos en la cola para poder recorrerla.\n");
                }
                break;    
            case 6:
                if(vaciaC(salida)==0)
                {
                    printf("\n6- Contar nodos.\n");
                    printf("\nHay %d elementos en la cola.\n", contarC(salida));
                } else {
                    printf("\nNo hay elementos en la cola para poder recorrerla.\n");
                }
                break;
            case 7:
                if(vaciaC(salida)==0)
                {
                    printf("\n7- Valor Minimo/Maximo.\n");
                    maxminC(salida);
                } else {
                    printf("\nNo hay elementos en la cola para poder recorrerla.\n");
                }
                break;
            default: printf("\nOpcion incorrecta, ingrese nuevamente.\n");
        }

        system("pause");
    }while(op!=0);

    return 0;
}

int vaciaC(struct Cola *salida)
{
    int vacia=0;
    if(salida == NULL)
    {
        vacia=1;
    }

    return(vacia);
}

void encolar(struct Cola **nodo, struct Cola **entrada, struct Cola **salida)
{
    if(vaciaC(*salida)==1)
    {
        *salida=*nodo;
    } else {
        (*entrada)->sgte=*nodo;
    }

    *entrada=*nodo;
    *nodo=NULL;
}

void desencolar(struct Cola **nodo, struct Cola **entrada, struct Cola **salida)
{
    *nodo=*salida;
    *salida=(*salida)->sgte;
    (*nodo)->sgte=NULL;

    if(vaciaC(*salida)==1)
    {
        *entrada=NULL;
    }
}

void recorrerC(struct Cola *salida)
{
    struct Cola *rc=salida;

    while(rc!=NULL)
    {
        printf("%d\n", rc->valor);
        rc = rc->sgte;
    }
}

void buscarC(int valor, struct Cola *salida)
{
    struct Cola *rc=salida;
    int n = 0;

    while(rc!=NULL)
    {
        if(rc->valor == valor){
            n++;
        }
        rc = rc->sgte;
    }
    if(n > 1){
        printf("\nSe ha encontrado el valor \"%d\" %d veces\n", valor, n);
    } else if (n == 1){
        printf("\nSe ha encontrado una vez al valor \"%d\".\n", valor);
    } else {
        printf("\nNo se ha encontrado \"%d\" en la cola.\n", valor);
    }
}

void borrarC(int valor, struct Cola **entrada, struct Cola **salida)
{
    struct Cola *eAux=NULL, *sAux=NULL, *nodo=NULL;
    int eu=0;

    while(vaciaC(*salida)==0)
    {
        desencolar(&nodo,entrada,salida);
        if(nodo->valor==valor)
        {
            printf("\nElemento encontrado, procede a eliminarse.\n");
            eu=1;
            free(nodo);
        } else {
            encolar(&nodo,&eAux,&sAux);
        }
    }

    while(vaciaC(sAux)==0)
    {
        desencolar(&nodo,&eAux,&sAux);
        encolar(&nodo,entrada,salida);
    }

    if(eu==0)
    {
        printf("\nNo se encontro el elemento \"%d\" en la cola.\n", valor);
    } else {
        printf("\nEl/los elemento/s \"%d\" ha/n sido borrado/s.\n", valor);
    }
}

void eliminarC(struct Cola **entrada, struct Cola **salida)
{
    struct Cola *nodo=NULL;

    while(vaciaC(*salida)==0)
    {
        desencolar(&nodo,entrada,salida);
        free(nodo);
    }
}

int contarC(struct Cola *salida)
{
    struct Cola *rc=salida;
    int n=0;

    while(rc!=NULL)
    {
        n++;
        rc = rc->sgte;
    }
    return(n);
}

void maxminC(struct Cola *salida)
{
    struct Cola *rc=salida;
    int max, min;

    max = salida->valor;
    min = max;

    while(rc!=NULL)
    {
        if(rc->valor > max)
        {
            max = rc->valor;
        }
        if(rc->valor < min)
        {
            min = rc->valor;
        }
        rc = rc->sgte;
    }

    printf("\nValor maximo encontrado en la cola: %d.\n", max);
    printf("\nValor minimo encontrado en la cola: %d.\n", min);
}
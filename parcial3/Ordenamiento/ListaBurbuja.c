nclude "operaciones.h"
#include <stdio.h>
#include <stdlib.h>
#define NULL ((void *)0)

void inicializar(struct nodo *cabecera)
{
	cabecera->sig = NULL;
}

void insertar_al_final(struct nodo *cabecera, int valor,char nombre){

    struct nodo *nuevo;
	nuevo = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	struct nodo *actual;
	actual = (struct nodo*) malloc(sizeof(struct nodo) * 1);

    nuevo->val = valor;//nodo.val
    nuevo->sig= NULL;
    nuevo->nom= nombre;

    if(cabecera != NULL){
    actual=cabecera;

    while(actual->sig != NULL)
        actual = actual->sig;
    }

    actual->sig = nuevo;
}

void imprimir_lista(struct nodo *cabecera){

    struct nodo *actual;
    if(cabecera != NULL){
        printf("\n**************Acomodo de los procesos ***************\n ");
        actual = cabecera->sig;
        while(actual != NULL){
            printf("\nProceso -> %c : %d \n",actual->nom, actual->val);
            actual= actual->sig;
        }

    }
}

void FIFO (struct nodo *cabecera,int nprocesos){
    struct nodo *actual;
    int acumulador,proceso;
    float retorno;
    acumulador=0;
    proceso=65;
    retorno=0;
    if (cabecera != NULL){
            printf("************ Procesamiento en FIFO ****************\n");
            actual=cabecera->sig;
            while (actual != NULL){
                acumulador=acumulador+actual->val;
                retorno+=acumulador;
                printf("Tiempo de retorno para el proceso %c -> %d \n",((char)(proceso)),acumulador);
                actual= actual->sig;
                proceso+=1;
            }
            printf("\nTiempo de retorno promedio %5.2f\n",retorno/nprocesos);
    }

}

void BurbujaSJF(struct nodo *cabecera){

    struct nodo *actual;
	float auxiliar;
	char aux;
	int   esta_ordenado = 0;

	if (cabecera->sig != NULL) {
		while ( ! esta_ordenado ) {
			esta_ordenado = 1;
			actual = cabecera->sig;
			while ( actual->sig != NULL ) {
				if (actual->val > actual->sig->val) {
					auxiliar = actual->val;
					aux=actual->nom;

					actual->val = actual->sig->val;
					actual->nom=actual->sig->nom;

					actual->sig->val = auxiliar;
					actual->sig->nom= aux;

					esta_ordenado = 0;
				}
				actual = actual->sig;
			}
		}
	}
}

void SJF (struct nodo *cabecera,int nprocesos){

    struct nodo *actual;
    int acumulador;
    float retorno;
    acumulador=0;
    retorno=0;
    if (cabecera != NULL){
            printf("************ Procesamiento en SJF ****************\n");
            actual=cabecera->sig;
            while (actual != NULL){
                acumulador=acumulador+actual->val;
                retorno+=acumulador;
                printf("Tiempo de retorno para el proceso %c -> %d \n",actual->nom,acumulador);
                actual= actual->sig;
            }
            printf("\nTiempo de retorno promedio %5.2f \n",retorno/nprocesos);
    }


}

void borrar_lista(struct nodo *cabecera)
{
	struct nodo *actual;
	struct nodo *borrar;

	/* Si es diferente de nulo borrar lista */
	if (cabecera->sig != NULL) {
		actual = cabecera->sig;
		borrar = cabecera->sig;
		/* Mientras el siguiente sea diferente de nulo */
		while ( actual->sig != NULL) {
			actual = actual->sig;
			free(borrar);
			borrar = actual;
		}
		free(borrar);
		printf("\n Lista eliminada :D ");
		cabecera->sig = NULL;
	}
}

int calcular_quantum(struct nodo *cabecera)
{
	struct nodo *actual;

    int aux;
    int cont = 0;
    int suma = 0;
    int cuanto;

    actual = cabecera;

	while(actual->sig != NULL){
		actual = actual->sig;
		aux = actual->val;
		//printf("%d este es aux \n", aux);
		suma = suma + aux;
		//printf("%d este es suma \n", suma);
		cont = cont + 1.0;
		//printf("%d este es cont \n", cont);
	}
    cuanto = suma / cont;
    return cuanto;
}

void round_robin (struct nodo *cabecera, int quantum, int nprocesos){

    struct nodo *actual;
    struct nodo *nuevo;
    struct nodo *pivote;

    int aux = 0;
    int cont = 0;
    float rr = 0.0;
    int valor_nuevo = 0;
    int conta = 0;

    actual = cabecera;
    nuevo = actual;

    while(actual->sig != NULL){
    actual = actual->sig;
        if (actual ->val > quantum){
            actual->val = actual->val - quantum;
            printf("if: %d\n", actual->val);
            cont = cont + quantum;

            valor_nuevo = actual->val;

            actual->val = -1;
            pivote = actual;

            actual = cabecera;
            nuevo = (struct nodo*) malloc(sizeof(struct nodo));
            nuevo->val = valor_nuevo;

            while(actual->sig != NULL){
                actual = actual->sig;
            }

            nuevo->sig = actual->sig;
            actual->sig = nuevo;

            actual = pivote;

        } else{

            actual->val = ((actual->val - quantum) * -1);
            printf("else: %d\n", actual->val);

            aux = quantum - actual -> val;
            cont = cont + aux;
            printf("TR: %d \n", cont);
            conta = conta + cont;

            actual->val = -1;
        }
    }
        rr = (conta / nprocesos);
        printf("Tiempo Promedio: %5.2f \n", rr);
}


int main(){

    int i,proceso,opcion,dato,nprocesos;
    proceso=65;
    char letra;
    struct nodo *root = (struct nodo*) malloc(sizeof(struct nodo) * 1);

    inicializar(root);


    printf("Numero de procesos a ingresar?\n ");
    scanf("%d",&nprocesos);

    for(i=0;i<nprocesos;i++){
        letra=((char)proceso+i);
        printf("Ingrese el tiempo para el proceso %c\n",letra);
        scanf("%d",&dato);
        insertar_al_final(root,dato,letra);
    }
    do{
    printf("Elegir la opcion de procesamiento \n1) FIFO \n2) SJF \n3)Salir \n");
    scanf("%d",&opcion);
    switch(opcion){
        case 1:
        imprimir_lista(root);
        FIFO(root,nprocesos);
        break;

        case 2:
        BurbujaSJF(root);
        imprimir_lista(root);
        SJF(root,nprocesos);
        //imprimir_lista(root);
        //SJF(root,nprocesos);
        break;

        case 3:
            break;


    }
    }while(opcion != 3);
    return 0;
}

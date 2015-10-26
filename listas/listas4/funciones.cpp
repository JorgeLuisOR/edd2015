#include <cstdlib>
#include <iostream>
#include "funciones.h"

using namespace std;

void iniciar (list &lista){
    lista.inicio = NULL;
    lista.capacidad = 0;
}

nodo *nodonuevo(int dato){
    nodo *nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->next = NULL;
    return nuevo;
}

bool vacia (list &lista){
    if(lista.capacidad == 0)
        return true;
    else return false;
}

bool insertarEnmedio(list &lista, int dato){
    nodo *p, *q, *auxiliar;
    p=lista.inicio;

    if(vacia(lista)){
        lista.inicio = nodonuevo(dato);
        lista.capacidad++;
    }

    else{
            while(p != NULL){
                q=p;
                p=p->next;
            }
            auxiliar= nodonuevo(dato);
            q->next=auxiliar;
            lista.capacidad++;
    }
}


void busqueda (list &lista, int busq, int dato){
    nodo *p = lista.inicio, *q, *aux;
    while(p->dato != busq)
    {
        p=p->next;
    }
    if(p->dato == busq){
        q=p;
        p=p->next;
        aux = nodonuevo(dato);
        q->next = aux;
        aux->next=p;
    }
    else if(p == NULL)
        cout<<"No se encontro el dato lo sentimos"<<endl;
}



void imprimir(list &lista){
    nodo *p=lista.inicio;
    while(p != NULL){
        cout<<p->dato<<" ";
        p=p->next;
    }
}



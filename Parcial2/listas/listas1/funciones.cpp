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

bool insertarAlfinal(list &lista, int dato){
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
        auxiliar = nodonuevo(dato);
        q->next=auxiliar;
        lista.capacidad++;
    }
}

int busqueda (list &lista, int busq, int dato){
    nodo *p = lista.inicio, *q, *aux;
    while(p->dato != busq)
    {
        p=p->next;
        if(p == NULL){
            cout<<"No esta el dato a buscar"<<endl;
            return 0;
        }
    }
    if(p->dato == busq){
        q=p;
        p=p->next;
        aux = nodonuevo(dato);
        q->next = aux;
        aux->next=p;
    }
}

void borrarTodo (list &lista){
    nodo *aux;

    while(lista.inicio != NULL)
    {
        aux = lista.inicio;
        lista.inicio = aux->next;
        delete(aux);
    }
    lista.inicio=NULL;
    lista.capacidad=0;
}


bool insertarAlprincipio(list &lista, int dato){
    nodo *p, *q, *auxiliar;
    p=lista.inicio;

    if(vacia(lista)){
        lista.inicio = nodonuevo(dato);
        lista.capacidad++;
    }

    else{
            auxiliar = nodonuevo(dato);
            lista.inicio = auxiliar;
            auxiliar->next = p;
            lista.capacidad++;
    }
}


void imprimir(list &lista){
    nodo *p=lista.inicio;
    while(p != NULL){
        std::cout<<p->dato<<" ";
        p=p->next;
    }
}



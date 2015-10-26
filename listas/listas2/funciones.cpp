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

void imprimir(list &lista){
    nodo *p=lista.inicio;
    while(p != NULL){
        cout<<p->dato<<" ";
        p=p->next;
    }
}



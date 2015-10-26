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
        cout<<p->dato<<" ";
        p=p->next;
    }
}



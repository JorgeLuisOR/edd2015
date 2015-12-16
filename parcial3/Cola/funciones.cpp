#include <iostream>
#include <cstdio>
#include "funciones.h"

using namespace std;

void inicializar (queue &c)
{
    c.inicio = NULL;
    c.atras = NULL;
    c.cap = 0;
}

bool vacia (queue &c)
{
    if(c.cap == 0) return true;
    else return false;
}

nodo *nodonuevo (int dato){
    nodo *p = new nodo;
    p->dato = dato;
    p->next = NULL;
    return p;
}

void agregar (queue &c, int dato){
    nodo *p = nodonuevo(dato), *q, *auxiliar;
    if(c.inicio == NULL){
        c.inicio = p;
        c.inicio->next = NULL;
    }
    else
    {
        q=c.inicio;
        while(q != NULL){
            auxiliar = q;
            q=q->next;
        }
        c.atras = p;
        auxiliar->next = p;
        p->next = NULL;
    }
    c.cap++;
}

void imprimir (queue &c){
    nodo * p = c.inicio;
    while(p != NULL){
        cout<<p->dato<<" ";
        p=p->next;
    }
    cout<<endl;
}

void eliminar1 (queue &c){
    nodo *p= c.inicio;
    if(p != NULL){
    c.inicio=c.inicio->next;
    delete(p);
    c.cap --;
    }
    else cout<<"Ya no hay datos a sacar"<<endl;
}

void vaciar (queue &c){
    nodo *p= c.inicio;
    while(p!= NULL)
    {
        c.inicio=c.inicio->next;
        delete(p);
    }
    c.cap =0;
    c.inicio = NULL;
}






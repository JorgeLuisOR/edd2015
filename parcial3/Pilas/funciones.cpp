#include <iostream>
#include <cstdio>
#include "funciones.h"

using namespace std;

void inicializar (stack &c)
{
    c.inicio = NULL;
    c.atras = NULL;
    c.cap = 0;
}

bool vacia (stack &c)
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

void push(stack &c, int dato){
    nodo *p = nodonuevo(dato), *q, *auxiliar;
    if(c.inicio == NULL){
        c.inicio = p;
        c.inicio->next = NULL;
    }
    else
    {
        auxiliar = c.inicio;
        c.inicio = p;
        p->next = auxiliar;
    }
    c.cap++;
}

void imprimir (stack &c){
    nodo * p = c.inicio;
    while(p != NULL){
        cout<<p->dato<<" ";
        p=p->next;
    }
    cout<<endl;
}

void tope (stack &c){
   if(c.inicio!= NULL)
        cout<<".-"<<c.inicio->dato<<endl;
    else
        cout<<"No hay dato"<<endl;
}




void pop (stack &c){
    nodo *p= c.inicio;
    if(p != NULL){
    c.inicio=c.inicio->next;
    delete(p);
    c.cap --;
    }
    else cout<<"Ya no hay datos a sacar"<<endl;
}

void vaciar (stack &c){
    nodo *p= c.inicio;
    while(p!= NULL)
    {
        c.inicio=c.inicio->next;
        delete(p);
    }
    c.cap =0;
    c.inicio = NULL;
}






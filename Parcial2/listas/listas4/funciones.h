#ifndef _LIST
#define _LIST

typedef struct snodo{
    int dato;
    snodo * next;
}nodo;

typedef struct{
    nodo * inicio;
    int capacidad;
}list;

void iniciar (list &);
nodo *nodonuevo(int );
bool vacia (list &);
void imprimir(list &);
bool insertarEnmedio(list &, int );
void busqueda (list &, int , int);
#endif // _LIST

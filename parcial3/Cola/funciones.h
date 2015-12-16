#ifndef _COLA
#define _COLA

typedef struct snodo{
        int dato;
        snodo *next;
}nodo;

typedef struct{
        nodo * inicio;
        nodo * atras;
        int cap;
}queue;

void inicializar (queue &);
bool vacia (queue &);
nodo *nodonuevo (int);
void agregar (queue &, int);
void imprimir (queue &);
void eliminar1 (queue &);
void vaciar (queue &);
#endif // _COLA

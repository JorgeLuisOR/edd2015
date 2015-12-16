#ifndef _PILA
#define _PILA

typedef struct snodo{
        int dato;
        snodo *next;
}nodo;

typedef struct{
        nodo * inicio;
        nodo * atras;
        int cap;
}stack;

void inicializar (stack &);
bool vacia (stack &);
nodo *nodonuevo (int);
void push(stack &, int);
void tope (stack &);
void imprimir (stack &);
void pop(stack &);
void vaciar (stack &);
#endif // PILA

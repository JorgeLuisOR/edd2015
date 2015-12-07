#include <cstdlib>
#include <iostream>
#include "funciones.h"

using namespace std;

int main () {
    list lista;
    int dato;
    iniciar(lista);

    while(dato != -1){
        cout<<".- ";
        cin>>dato;
        if(dato != -1)
        insertarAlfinal(lista, dato);
    }

    imprimir(lista);
}

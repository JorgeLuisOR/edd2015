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
        insertarEnmedio(lista, dato);
    }
    imprimir(lista);
    cout<<endl;
    int busq;

    cout<<"Donde deseas insertar el numero"<<endl;
    cin>>busq;
    cout<<"Que numero desea insertar"<<endl;
    cin>>dato;
    cout<<endl;
    busqueda(lista, busq, dato);
    imprimir(lista);
}

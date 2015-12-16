#include <iostream>
#include <cstdio>
#include "funciones.h"

using namespace std;

int main (){
    stack pila;
    int opc=0, dato;

    inicializar(pila);

    while(opc != 4){
        imprimir(pila);
        cout<<"Selecciona una opcion"<<endl;
        cout<<"1)Insertar"<<endl;
        cout<<"2)Sacar dato"<<endl;
        cout<<"3)Tope"<<endl;
        cout<<"4)salir"<<endl;
        cin>>opc;
        switch(opc){
        case 1:
            cout<<"Ingresa un dato"<<endl;
            cin>>dato;
            push(pila, dato);
            break;
        case 2:
            pop(pila);
            break;
        case 3:
            tope(pila);
            break;
        case 4:
            cout<<"Bye"<<endl;
            break;
        default:
            cout<<"Eleccion no existente"<<endl;
            break;
        }

    }
}

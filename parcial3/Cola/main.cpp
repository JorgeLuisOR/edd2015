#include <iostream>
#include <cstdio>
#include "funciones.h"

using namespace std;

int main (){
    queue cola;
    int opc=0, dato;

    inicializar(cola);

    while(opc != 3){
        imprimir(cola);
        cout<<"Selecciona una opcion"<<endl;
        cout<<"1)Insertar"<<endl;
        cout<<"2)Sacar dato"<<endl;
        cout<<"3)salir"<<endl;
        cin>>opc;
        switch(opc){
        case 1:
            cout<<"Ingresa un dato"<<endl;
            cin>>dato;
            agregar(cola, dato);
            break;
        case 2:
            eliminar1(cola);
            break;
        case 3:
            cout<<"Bye"<<endl;
            break;
        default:
            cout<<"Eleccion no existente"<<endl;
            break;
        }

    }
}

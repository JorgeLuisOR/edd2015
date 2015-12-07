#include <cstdlib>
#include <iostream>
#include "funciones.h"

using namespace std;

int main () {
    list lista;
    int dato, opc =0, rep=0, busq;
    iniciar(lista);

    while(opc != 4){
        cout<<"Selecciona una opcion"<<endl;
        cout<<"1)Insertar al final"<<endl;
        cout<<"2)Insertar al principio"<<endl;
        cout<<"3)Busqueda"<<endl;
        cout<<"4)Salir"<<endl;
        cin>>opc;

        switch(opc){
        case 1:
            dato=0;
            while(dato != -1){
                cout<<".-";
                cin>>dato;
                if(dato != -1)
                insertarAlfinal(lista, dato);
            }
            imprimir(lista);
            borrarTodo(lista);
            break;

        case 2:
            dato=0;
            while(dato != -1){
                cout<<".-";
                cin>>dato;
                if(dato != -1)
                insertarAlprincipio(lista, dato);
            }
            imprimir(lista);
            borrarTodo(lista);
            break;
        case 3:
            dato=0;
            while(dato != -1){
                cout<<".-";
                cin>>dato;
                if(dato != -1)
                insertarAlfinal(lista, dato);
            }
            imprimir(lista);
            cout<<endl;

            do{
                dato=0;
                cout<<"Ingrese el numero a buscar"<<endl;
                cin>>busq;
                cout<<"Ingrese dato a insertar"<<endl;
                cin>>dato;
                busqueda(lista, busq, dato);
                imprimir(lista);
                cout<<"Desea continuar? (ingrese 1 para terminar"<<endl;
                cin>>rep;
            }while(rep != 1);
            borrarTodo(lista);
            break;

        case 4:
            cout<<"Saliste, bye"<<endl;
            break;
        default:
            cout<<"Intentalo otra vez"<<endl;
            break;
        }
    }

}

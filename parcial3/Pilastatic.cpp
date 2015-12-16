#include <iostream>
#include <cstdio>

using namespace std;

int main (){
    int pila[7];
    int opc, i=7, dato;

    while (opc != 4){

        cout<<"Selecciona una opcion"<<endl;
        cout<<"1) Insertar en pila"<<endl;
        cout<<"2) Mostrar tope"<<endl;
        cout<<"3) Eliminar"<<endl;
        cout<<"4) Salir"<<endl;
        cin>>opc;

        switch(opc){
        case 1:
            if(i >= 0){
                i--;
                cout<<"Ingresa el dato"<<endl;
                cin>>dato;
                pila[i]=dato;

            }
            else{
                cout<<"Pila llena"<<endl;
            }
            break;
        case 2:
            if(i == -1)
                i=0;
            cout<<"El tope es"<<pila[i]<<endl;

            if(i == 0)
                i=-1;
            break;
        case 3:
            if(i == -1)
            i=0;
            if(i != 6){
                i++;
            }

            else
                cout<<"Pila vacia"<<endl;
            break;
        case 4:
            cout<<"Bye"<<endl;
            break;
        default:
            cout<<"Error"<<endl;
            break;
        }
        if(i != 6){
                if(i == -1)
                i=0;
            for(int j = 6; j>=i; j--){
                cout<<pila[j]<<" ";
            }
            if(i== 0)
                i=-1;
                cout<<endl;
            }
    }
}

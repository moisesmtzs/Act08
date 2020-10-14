#include "laboratorio.h"

Laboratorio::Laboratorio(){

    cont = 0;

}

void Laboratorio::agregarFinal( const Computadora &c ){

    if ( cont < 5 ){
        computadoras[cont] = c;
        cont++;
    } else {
        cout << "No hay más espacio para computadoras" << endl;
    }

}

void Laboratorio::mostrar(){
    cout << endl;
    cout << left;
    cout << setw(10) << "Sistema";
    cout << setw(10) << "RAM";
    cout << setw(10) << "Marca";
    cout << setw(10) << "Bateria";
    cout<<endl<<"Operativo"<<endl;
    cout << endl;
    for ( size_t i = 0 ; i < cont ; i++ ){

        Computadora &c = computadoras[i];
        cout<<c;
        cout<<endl;

    }
}

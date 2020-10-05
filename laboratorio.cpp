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

    for ( size_t i = 0 ; i < cont ; i++ ){

        Computadora &c = computadoras[i];
        cout<<endl;
        cout << "Sistema Operativo: "<< c.getSo() << endl;
        cout << "RAM: "  << c.getRam() << endl;
        cout << "Marca: "<< c.getMarca() << endl;
        cout << "Bateria: " << c.getBateria() << endl;
        cout<<endl;

    }
}

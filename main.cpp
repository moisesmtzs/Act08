#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){

    string so, marca;
    int ram;
    float bateria;
    Computadora c01 = Computadora( "Windows", 16, "Toshiba", 4900 );
    Computadora c02;
    cout << "Introduce el sistema operativo: "<<endl;
    getline( cin,so );
    c02.setSo(so);
    cout << "Introduce la RAM del dispositivo: "<<endl;
    cin>>ram;
    c02.setRam(ram);
    cin.ignore();
    cout << "Introduce la marca del dispositivo: "<<endl;
    getline( cin,marca );
    c02.setMarca(marca);
    cout << "Introduce la bateria del dispositivo: "<<endl;
    cin>>bateria;
    c02.setBateria(bateria);

    Computadora c03 = Computadora( "Windows", 32, "ASUS", 5150 );

    Laboratorio cmps;
    cmps.agregarFinal(c01);
    cmps.agregarFinal(c02);
    cmps.agregarFinal(c03);
    cmps.mostrar();

    return 0;

}
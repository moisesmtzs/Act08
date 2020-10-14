#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

class Laboratorio{

    Computadora computadoras[5];
    size_t cont;

public:
    Laboratorio();
    void agregarFinal( const Computadora &c );
    void mostrar();

    friend Laboratorio& operator<<( Laboratorio &l, const Computadora &c ){

        l.agregarFinal(c);
        return l;
    }
};

#endif
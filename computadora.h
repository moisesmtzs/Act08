#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>

using namespace std;

class Computadora{

    string so;
    int ram;
    string marca;
    float bateria;

public:
    Computadora();
    Computadora( const string &so, int ram, const string &marca, float bateria );
    void setSo( const string &s );
    string getSo();
    void setRam( int s );
    int getRam();
    void setMarca( const string &s );
    string getMarca();
    void setBateria( float s );
    float getBateria();

};

#endif
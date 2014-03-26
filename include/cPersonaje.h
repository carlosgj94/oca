#ifndef CPERSONAJE_H
#define CPERSONAJE_H
#include <iostream>
#include <cstdlib>
using namespace std;

class cPersonaje
{
    public:
        cPersonaje();
        cPersonaje(string);
        ~cPersonaje();

        int getPosicion();
        void moverPosicion();

    private:
        int posicion;
        int tirarDado();
        string nombre;
};

#endif // CPERSONAJE_H

#ifndef CPERSONAJE_H
#define CPERSONAJE_H
#include <iostream>
#include <cstdlib>
using namespace std;

class cPersonaje
{
    public:
        cPersonaje();
        ~cPersonaje();

        int getPosicion();
        void moverPosicion();

    private:
        int posicion;
        int tirarDado();
};

#endif // CPERSONAJE_H

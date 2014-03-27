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
        int getNombre();
        int getPosicion();
        void moverPosicion();
        int getTurnosDetenido();
        void setTurnosDetenido(int);

    private:
        int posicion;
        int turnosDetenido;
        int tirarDado();
        string nombre;
};

#endif // CPERSONAJE_H

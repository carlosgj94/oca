#ifndef CCASILLA_H_
#define CCASILLA_H_
#include <iostream>
using namespace std;

class cCasilla{
private:
    int cambiarPosicion; //Te suma un int a la pos
    int detenerTurno; // Detiene turno X veces
    bool seguirTurno; //Mantiene tu turno 1 vez mas
    bool ganadora; //Se describe sola
    int posiciones[41];

public:
    int getcambiarPosicion();
    int getDetenerTurno();
    int getSeguirTurno();
    int getGanadora();
    int getPosiciones();
    cCasilla();
    cCasilla(int, int, bool, bool, int);
};
#endif CCASILLA_H_

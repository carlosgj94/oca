#ifndef CCASILLA_H_
#define CCASILLA_H_
#include <iostream>
#include <cstdlib>
using namespace std;
class cCasilla{
private:
    int cambiarPosicion; //Te suma un int a la pos
    int detenerTurno; // Detiene turno X veces
    bool seguirTurno; //Mantiene tu turno 1 vez mas
    bool ganadora; //Se describe sola
    int posiciones[42];

public:
    void operator = (cCasilla);
    int getcambiarPosicion();
    int getDetenerTurno();
    bool getSeguirTurno();
    bool getGanadora();
    int getPosiciones();
    cCasilla();
    cCasilla(int, int, bool, bool, int*);
};
#endif //CCASILLA_H_
#ifndef CCASILLA_H_
#define CCASILLA_H_
#include <iostream>
#include <cstdlib>
using namespace std;
class cCasilla{
private:
    int cambiarPosicion; //Te suma un int a la pos
    int detenerTurno; // Detiene turno X veces
    bool seguirTurno; //Mantiene tu turno 1 vez mas
    bool ganadora; //Se describe sola
    int posiciones[42];

public:
    void operator = (cCasilla);
    int getcambiarPosicion();
    int getDetenerTurno();
    bool getSeguirTurno();
    bool getGanadora();
    int getPosiciones();
    cCasilla();
    cCasilla(int, int, bool, bool, int*);
};
#endif //CCASILLA_H_

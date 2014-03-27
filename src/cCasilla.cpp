#include "cCasilla.h"


cCasilla::cCasilla() {
    cambiarPosicion=0;
    detenerTurno=0;
    seguirTurno=false;
    ganadora=false;

    for(int i=0; i<40; i++){
        posiciones[i]=NULL;
    }
}
cCasilla::cCasilla(int pos, int dTurno, bool sTurno, bool ganar, int posicion[] ){
    cambiarPosicion = pos;
    detenerTurno = dTurno;
    seguirTurno = sTurno;
    ganadora = ganar;
    for(int i=0; i<40; i++){
        posiciones[i]=posicion[i];
    }

}
cCasilla cCasilla::operator = (cCasilla casilla){
    cambiarPosicion=casilla.cambiarPosicion;
    detenerTurno=casilla.detenerTurno;
    seguirTurno=casilla.seguirTurno;
    ganadora=casilla.ganadora;
    for(int i=0; i<40; i++){
        posiciones[i]=casilla.posiciones[i];
    }
}
int cCasilla::getcambiarPosicion(){
    return cambiarPosicion;
}
int cCasilla::getDetenerTurno(){
    return detenerTurno;
}

bool cCasilla::getSeguirTurno(){
    return seguirTurno;
}

bool cCasilla::getGanadora(){
    return ganadora;
}

int cCasilla::getPosiciones(){
    return posiciones;
}

#include "cTablero.h"

cTablero::cTablero()
{
    int i=0;
    for(i; i<10; i++){
        casillas[i]= NULL;
    }
}
void cTablero::inicializarCasillas(){
    int i=0;
    for(i; i<10; i++){
        casillas[i]= new cCasilla;
    }
}

void cTablero::crearCasillas(){
    casillaOca();
    casillaPuente();
    casillaPosoda();
    casillaPozo();
    casillaLaberinto();
    casillaCarcel();
    casillaDados();
    casillaMuerte();
    casillaFinal();
    casillaNormal();
}
void cTablero::casillaOca(){//No siempre cambia 5 posiciones, afinar mas tarde!!!!!!!!!!!
    int posiciones[13] = {5, 9, 14, 18, 23, 27, 32, 36, 41, 45, 50, 54, 59};

    cCasilla oca(5, 0, true, false, posiciones); //No siempre cambia 5 posiciones, afinar mas tarde
    *casilla[1] = oca;
}
void cTablero::casillaPuente(){//Tambien puede mover negativo CAMBIAR!!!!

    int posiciones[2]= {6, 12};

    cCasilla puente(6, 0, true, false, posiciones);
    *casilla[2]= puente;
}

void cTablero::casillaPosoda(){
    int posiciones= {19};
    cCasilla posada(0, 1, false, false, posiciones);
    *casilla[3]= posada;
}

void cTablero::casillaPozo(){
    int posiciones= {31};
    cCasilla pozo(0, 10, false, false, posiciones);
    *casilla[4]=pozo;
}

void cTablero::casillaLaberinto(){//NO retrocede 30, sino que te lleva a la treinta
    int posiciones={42};
    cCasilla laberinto(-30, 0, false, false, posiciones);
}

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

void cTablero::casillaNormal(){
    int posiciones{1, 2, 3, 4, 7, 8, 9, 10, 11, 13, 15, 16, 17, 20, 21, 22, 24, 25, 28, 29, 30, 33, 34, 35, 37, 38, 39, 40, 43, 44, 46, 47, 48, 49, 51, 55, 56, 57, 58, 60, 61, 62};
    cCasilla normal(0, 0, false, false, posiciones);
    casilla[0]= normal;
}

void cTablero::casillaOca(){//No siempre cambia 5 posiciones, afinar mas tarde!!!!!!!!!!!
    int posiciones[13] = {5, 9, 14, 18, 23, 27, 32, 36, 41, 45, 50, 54, 59};

    cCasilla oca(5, 0, true, false, posiciones); //No siempre cambia 5 posiciones, afinar mas tarde
    casilla[1] = oca;
}
void cTablero::casillaPuente(){//Tambien puede mover negativo CAMBIAR!!!!

    int posiciones[2]= {6, 12};

    cCasilla puente(6, 0, true, false, posiciones);
    casilla[2]= puente;
}

void cTablero::casillaPosoda(){
    int posiciones= {19};
    cCasilla posada(0, 1, false, false, posiciones);
    casilla[3]= posada;
}

void cTablero::casillaPozo(){
    int posiciones= {31};
    cCasilla pozo(0, 10, false, false, posiciones);
    casilla[4]=pozo;
}

void cTablero::casillaLaberinto(){//NO retrocede 30, sino que te lleva a la treinta
    int posiciones={42};
    cCasilla laberinto(-30, 0, false, false, posiciones);
    casilla[5]= laberinto;
}

void cTablero::casillaCarcel(){
    int posiciones = {52};
    cCasilla carcel(0, 3, false, false, posiciones);
    casilla[6]=  carcel;
}

void cTablero::casillaDados(){//DE DADO A DADO Y TIRO PORQUE ME HA TOCADO, NO SOLO AVANZAS X
    int posiciones={26, 53};
    cCasilla dados(26, 0, true, false, posiciones);
    casilla[7]= dados;
}

void cTablero::casillaMuerte(){
    int posiciones{58}; 
    cCasilla muerte(-58, 0, false, false, posiciones);
    casilla[8]= muerte;
}

void cTablero::casillaFinal(){
    int posiciones{63};
    cCasilla final(0, 0, false true, posiciones);
    casilla[9] = final;
}

